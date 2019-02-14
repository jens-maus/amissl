/* 
 * Make sure that this file is included from proto/amissl.h
 * so that the dependancies don't cause errors
 */
#ifndef PROTO_AMISSL_H
#include <proto/amissl.h>
#endif

#ifndef AMISSL_AMISSL_H
#define AMISSL_AMISSL_H

#ifdef __SASC
#define ssize_t int
#endif

#include <openssl/opensslconf.h>

#ifndef OPENSSL_NO_AES
#include <openssl/aes.h>
#endif
#include <openssl/asn1.h>
#include <openssl/asn1t.h>
#include <openssl/async.h>
#include <openssl/bio.h>
#ifndef OPENSSL_NO_BF
#include <openssl/blowfish.h>
#endif
#include <openssl/bn.h>
#include <openssl/buffer.h>
#ifndef OPENSSL_NO_CAMELLIA
#include <openssl/camellia.h>
#endif
#ifndef OPENSSL_NO_CAST
#include <openssl/cast.h>
#endif
#include <openssl/cmac.h>
#include <openssl/comp.h>
#include <openssl/conf.h>
#include <openssl/conf_api.h>
#include <openssl/crypto.h>
#ifndef OPENSSL_NO_CT
#include <openssl/ct.h>
#endif
#ifndef OPENSSL_NO_DES
#include <openssl/des.h>
#endif
#ifndef OPENSSL_NO_DH
#include <openssl/dh.h>
#endif
#ifndef OPENSSL_NO_DSA
#include <openssl/dsa.h>
#endif
#include <openssl/dtls1.h>
#include <openssl/ebcdic.h>
#ifndef OPENSSL_NO_EC
#include <openssl/ec.h>
#endif
#ifndef OPENSSL_NO_ECDH
#include <openssl/ecdh.h>
#endif
#ifndef OPENSSL_NO_ECDSA
#include <openssl/ecdsa.h>
#endif
#ifndef OPENSSL_NO_ENGINE
#include <openssl/engine.h>
#endif
#include <openssl/err.h>
#include <openssl/evp.h>
#ifndef OPENSSL_NO_HMAC
#include <openssl/hmac.h>
#endif
#ifndef OPENSSL_NO_IDEA
#include <openssl/idea.h>
#endif
#include <openssl/kdf.h>
#include <openssl/lhash.h>
#ifndef OPENSSL_NO_MD2
#include <openssl/md2.h>
#endif
#ifndef OPENSSL_NO_MD4
#include <openssl/md4.h>
#endif
#ifndef OPENSSL_NO_MD5
#include <openssl/md5.h>
#endif
#ifndef OPENSSL_NO_MDC2
#include <openssl/mdc2.h>
#endif
#include <openssl/modes.h>
#include <openssl/obj_mac.h>
#include <openssl/objects.h>
#include <openssl/ocsp.h>
#include <openssl/opensslv.h>
#include <openssl/ossl_typ.h>
#include <openssl/pem.h>
#include <openssl/pem2.h>
#include <openssl/pkcs12.h>
#include <openssl/pkcs7.h>
#include <openssl/rand.h>
#include <openssl/rand_drbg.h>
#ifndef OPENSSL_NO_RC2
#include <openssl/rc2.h>
#endif
#ifndef OPENSSL_NO_RC4
#include <openssl/rc4.h>
#endif
#ifndef OPENSSL_NO_RC5
#include <openssl/rc5.h>
#endif
#ifndef OPENSSL_NO_RIPEMD
#include <openssl/ripemd.h>
#endif
#ifndef OPENSSL_NO_RSA
#include <openssl/rsa.h>
#endif
#include <openssl/safestack.h>
#ifndef OPENSSL_NO_SEED
#include <openssl/seed.h>
#endif
#ifndef OPENSSL_NO_SHA
#include <openssl/sha.h>
#endif
#ifndef OPENSSL_NO_SRP
#include <openssl/srp.h>
#endif
#include <openssl/srtp.h>
#include <openssl/ssl.h>
#include <openssl/ssl2.h>
#include <openssl/ssl3.h>
#include <openssl/stack.h>
#include <openssl/store.h>
#include <openssl/symhacks.h>
#include <openssl/tls1.h>
#include <openssl/ts.h>
#include <openssl/txt_db.h>
#include <openssl/ui.h>
#ifndef OPENSSL_NO_WHIRLPOOL
#include <openssl/whrlpool.h>
#endif
#include <openssl/x509.h>
#include <openssl/x509_vfy.h>
#include <openssl/x509v3.h>

// order dependent header files
#ifndef OPENSSL_NO_CMS
#include <openssl/cms.h>
#endif

#include <amissl/tags.h>

// internal typedefs
#ifndef O_DIR_H
typedef struct OPENSSL_dir_context_st OPENSSL_DIR_CTX;
#endif

#endif /* AMISSL_AMISSL_H */
