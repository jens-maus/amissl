#ifndef PROTO_AMISSL_ALL_H
#define PROTO_AMISSL_ALL_H

#ifdef AMISSL_APPS_COMPILE

/* For amissl application (openssl/apps/*) only */

#include <dos/dos.h>

extern BPTR mystdin(void);
extern BPTR mystdout(void);
extern BPTR mystderr(void);

#define BIO_set_fp(a,b,c) BIO_set_fp_amiga((a),(my##b()),(c))
#define BIO_new_fp(a,b) BIO_new_fp_amiga((my##a()),(b))

#endif /* AMISSL_APPS_COMPILE */

#ifndef MAIN_LIB_COMPILE
extern struct Library *AmiSSLBase;
#include <pragmas/amissl_pragmas.h>
#endif

#ifndef AES_LIB_COMPILE
extern struct Library *AESBase;
#include <pragmas/aes_pragmas.h>
#endif

#ifndef BF_LIB_COMPILE
extern struct Library *BlowFishBase;
#include <pragmas/blowfish_pragmas.h>
#endif

#ifndef CAST_LIB_COMPILE
extern struct Library *CASTBase;
#include <pragmas/cast_pragmas.h>
#endif

#ifndef DES_LIB_COMPILE
extern struct Library *DESBase;
#include <pragmas/des_pragmas.h>
#endif

#ifndef DH_LIB_COMPILE
extern struct Library *DHBase;
#include <pragmas/dh_pragmas.h>
#endif

#ifndef DSA_LIB_COMPILE
extern struct Library *DSABase;
#include <pragmas/dsa_pragmas.h>
#endif

#ifndef IDEA_LIB_COMPILE
extern struct Library *IDEABase;
#include <pragmas/IDEA_pragmas.h>
#endif

#ifndef MD2_LIB_COMPILE
extern struct Library *MD2Base;
#include <pragmas/md2_pragmas.h>
#endif

#ifndef MD4_LIB_COMPILE
extern struct Library *MD4Base;
#include <pragmas/md4_pragmas.h>
#endif

#ifndef MD5_LIB_COMPILE
extern struct Library *MD5Base;
#include <pragmas/md5_pragmas.h>
#endif

#ifndef MDC2_LIB_COMPILE
extern struct Library *MDC2Base;
#include <pragmas/mdc2_pragmas.h>
#endif

#ifndef RC2_LIB_COMPILE
extern struct Library *RC2Base;
#include <pragmas/rc2_pragmas.h>
#endif

#ifndef RC4_LIB_COMPILE
extern struct Library *RC4Base;
#include <pragmas/rc4_pragmas.h>
#endif

#ifndef RC5_LIB_COMPILE
extern struct Library *RC5Base;
#include <pragmas/rc5_pragmas.h>
#endif

#ifndef RIPEMD_LIB_COMPILE
extern struct Library *RIPEMDBase;
#include <pragmas/ripemd_pragmas.h>
#endif

#ifndef RSA_LIB_COMPILE
extern struct Library *RSABase;
#include <pragmas/rsa_pragmas.h>
#endif

#ifndef SHA_LIB_COMPILE
extern struct Library *SHABase;
#include <pragmas/sha_pragmas.h>
#endif

#endif /* PROTO_AMISSL_ALL_H */
