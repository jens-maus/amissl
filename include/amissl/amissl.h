/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2022 AmiSSL Open Source Team.
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License in the file LICENSE in the
 source distribution or at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 AmiSSL Official Support Site: https://github.com/jens-maus/amissl

***************************************************************************/

/* 
 * Make sure that this file is included from proto/amissl.h
 * so that the dependancies don't cause errors
 */
#ifndef PROTO_AMISSL_H
#include <proto/amissl.h>
#endif

#ifndef AMISSL_AMISSL_H
#define AMISSL_AMISSL_H

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
#include <openssl/byteorder.h>
#ifndef OPENSSL_NO_CAMELLIA
#include <openssl/camellia.h>
#endif
#ifndef OPENSSL_NO_CAST
#include <openssl/cast.h>
#endif
#ifndef OPENSSL_NO_CMAC
#include <openssl/cmac.h>
#endif
#ifndef OPENSSL_NO_CMP
#include <openssl/cmp.h>
#endif
#include <openssl/comp.h>
#include <openssl/conf.h>
#include <openssl/conf_api.h>
#include <openssl/core.h>
#ifndef OPENSSL_NO_CRMF
#include <openssl/crmf.h>
#endif
#include <openssl/crypto.h>
#ifndef OPENSSL_NO_CT
#include <openssl/ct.h>
#endif
#include <openssl/decoder.h>
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
#include <openssl/encoder.h>
#ifndef OPENSSL_NO_ENGINE
#include <openssl/engine.h>
#endif
#include <openssl/err.h>
#include <openssl/ess.h>
#include <openssl/evp.h>
#ifndef OPENSSL_NO_HMAC
#include <openssl/hmac.h>
#endif
#include <openssl/hpke.h>
#include <openssl/http.h>
#ifndef OPENSSL_NO_IDEA
#include <openssl/idea.h>
#endif
#include <openssl/indicator.h>
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
#include <openssl/ml_kem.h>
#include <openssl/modes.h>
#include <openssl/obj_mac.h>
#include <openssl/objects.h>
#include <openssl/ocsp.h>
#include <openssl/opensslv.h>
#include <openssl/pem.h>
#include <openssl/pem2.h>
#include <openssl/pkcs12.h>
#include <openssl/pkcs7.h>
#include <openssl/params.h>
#include <openssl/param_build.h>
#include <openssl/provider.h>
#include <openssl/quic.h>
#include <openssl/rand.h>
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
#include <openssl/self_test.h>
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
#include <openssl/thread.h>
#include <openssl/tls1.h>
#include <openssl/trace.h>
#ifndef OPENSSL_NO_TS
#include <openssl/ts.h>
#endif
#include <openssl/txt_db.h>
#include <openssl/types.h>
#include <openssl/ui.h>
#ifndef OPENSSL_NO_WHIRLPOOL
#include <openssl/whrlpool.h>
#endif
#include <openssl/x509.h>
#include <openssl/x509_acert.h>
#include <openssl/x509_vfy.h>
#include <openssl/x509v3.h>

// order dependent header files
#ifndef OPENSSL_NO_CMS
#include <openssl/cms.h>
#endif

#include <amissl/tags.h>

// internal typedefs
#ifndef OSSL_INTERNAL_O_DIR_H
typedef struct OPENSSL_dir_context_st OPENSSL_DIR_CTX;
#endif

#endif /* AMISSL_AMISSL_H */
