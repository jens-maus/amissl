#ifndef LIBRARIES_AMISSLMASTER_H
#define LIBRARIES_AMISSLMASTER_H

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

#define AMISSL_V2           0x01  /* OBSOLETE NAME */
#define AMISSL_V096g        0x01  /* AmiSSL v2 */
#define AMISSL_V097g        0x02  /* AmiSSL v3.6/3.7 */
#define AMISSL_V097m        0x03  /* unreleased version */
#define AMISSL_V098y        0x04  /* unreleased version */
#define AMISSL_V102f        0x05  /* unreleased version */
#define AMISSL_V110c        0x06  /* unreleased version */
#define AMISSL_V110d        0x07  /* AmiSSL v4.0 */
#define AMISSL_V110e        0x08  /* AmiSSL v4.1 */
#define AMISSL_V110g        0x09  /* AmiSSL v4.2 */
#define AMISSL_V111a_OBS    0x0a  /* AmiSSL v4.3 (obsolete incompatible API) */
#define AMISSL_V111d        0x0b  /* AmiSSL v4.4/4.5 */
#define AMISSL_V111g        0x0c  /* AmiSSL v4.6 */
#define AMISSL_V111i        0x0d  /* AmiSSL v4.7 */
#define AMISSL_V111j        0x0e  /* AmiSSL v4.8 */
#define AMISSL_V111k        0x0f  /* AmiSSL v4.9 */
#define AMISSL_V111l        0x10  /* AmiSSL v4.10/4.11 */
#define AMISSL_V111m        0x11  /* AmiSSL v4.12 */
#define AMISSL_V300         0x12  /* unreleased version */
#define AMISSL_V301         0x13  /* unreleased version */
#define AMISSL_V302         0x14  /* unreleased version */
#define AMISSL_V303         0x15  /* AmiSSL v5.1 */

#define AMISSL_V10x         AMISSL_V102f /* Latest minimum AmiSSL/OpenSSL 1.0.x compatible version */
#define AMISSL_V11x         AMISSL_V110d /* Latest minimum AmiSSL/OpenSSL 1.1.x compatible version */
#define AMISSL_V3xx         AMISSL_V303  /* Latest minimum AmiSSL/OpenSSL 3.x.x compatible version */

#define AMISSL_CURRENT_VERSION   AMISSL_V303

#define AMISSLMASTER_MIN_VERSION 5

#endif /* !LIBRARIES_AMISSLMASTER_H */
