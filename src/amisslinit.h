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

/* Note: This structure can only grow, it can't be changed since
 * it is shared between amisslmaster.library and amissl.library,
 * which might be different versions!
 */
struct AmiSSLInitStruct
{
  struct Library *BlowFishBase;
  struct Library *CASTBase;
  struct Library *DESBase;
  struct Library *IDEABase;
  struct Library *MD2Base;
  struct Library *MD4Base;
  struct Library *MD5Base;
  struct Library *MDC2Base;
  struct Library *RC2Base;
  struct Library *RC4Base;
  struct Library *RC5Base;
  struct Library *RIPEMDBase;
  struct Library *SHABase;
  struct Library *RSABase;
  struct Library *DHBase;
  struct Library *DSABase;
};
