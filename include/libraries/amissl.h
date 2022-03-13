#ifndef LIBRARIES_AMISSL_H
#define LIBRARIES_AMISSL_H

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

#define CIPHER_BLOWFISH     0x01
#define CIPHER_CAST         0x02
#define CIPHER_DES          0x03
#define CIPHER_DH           0x04
#define CIPHER_DSA          0x05
#define CIPHER_IDEA         0x06
#define CIPHER_MD2          0x07
#define CIPHER_MD4          0x08
#define CIPHER_MD5          0x09
#define CIPHER_MDC2         0x0a
#define CIPHER_RC2          0x0b
#define CIPHER_RC4          0x0c
#define CIPHER_RC5          0x0d
#define CIPHER_RIPEMD       0x0e
#define CIPHER_RSA          0x0f
#define CIPHER_SHA          0x10
#define CIPHER_AES          0x11

#define CIPHER_BlowFish     CIPHER_BLOWFISH

#endif /* !LIBRARIES_AMISSL_H */
