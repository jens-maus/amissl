#ifndef LIBRARIES_AMISSLMASTER_H
#define LIBRARIES_AMISSLMASTER_H

/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2025 AmiSSL Open Source Team.
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

enum AmiSSLVersion
{
  AMISSL_V2 = 1,    /* OBSOLETE NAME */
  AMISSL_V096g = 1, /* AmiSSL v2 */
  AMISSL_V097g,     /* AmiSSL v3.6/3.7 */
  AMISSL_V097m,     /* unreleased version */
  AMISSL_V098y,     /* unreleased version */
  AMISSL_V102f,     /* unreleased version */
  AMISSL_V110c,     /* unreleased version */
  AMISSL_V110d,     /* AmiSSL v4.0 */
  AMISSL_V110e,     /* AmiSSL v4.1 */
  AMISSL_V110g,     /* AmiSSL v4.2 */
  AMISSL_V111a_OBS, /* AmiSSL v4.3 (obsolete incompatible API) */
  AMISSL_V111d,     /* AmiSSL v4.4/4.5 */
  AMISSL_V111g,     /* AmiSSL v4.6 */
  AMISSL_V111i,     /* AmiSSL v4.7 */
  AMISSL_V111j,     /* AmiSSL v4.8 */
  AMISSL_V111k,     /* AmiSSL v4.9 */
  AMISSL_V111l,     /* AmiSSL v4.10/4.11 */
  AMISSL_V111m,     /* AmiSSL v4.12 */
  AMISSL_V300,      /* unreleased version */
  AMISSL_V301,      /* unreleased version */
  AMISSL_V302,      /* unreleased version */
  AMISSL_V303,      /* AmiSSL v5.1 */
  AMISSL_V304,      /* AmiSSL v5.2 */
  AMISSL_V305,      /* AmiSSL v5.3 */
  AMISSL_V306,      /* AmiSSL v5.4 */
  AMISSL_V307,      /* AmiSSL v5.5/5.6 */
  AMISSL_V308,      /* AmiSSL v5.7 */
  AMISSL_V310,      /* AmiSSL v5.8 */
  AMISSL_V311,      /* AmiSSL v5.9 */
  AMISSL_V312,      /* AmiSSL v5.10 */
  AMISSL_V313,      /* AmiSSL v5.11 */
  AMISSL_V314,      /* AmiSSL v5.12 */
  AMISSL_V320,      /* AmiSSL v5.13 */
  AMISSL_V321,      /* AmiSSL v5.14 */
  AMISSL_V330,      /* AmiSSL v5.15 */
  AMISSL_V331,      /* AmiSSL v5.16 */
  AMISSL_V332,      /* AmiSSL v5.17 */
  AMISSL_V340,      /* AmiSSL v5.18 */
  AMISSL_V341,      /* AmiSSL v5.19 */
  AMISSL_V350,      /* AmiSSL v5.20 */
  AMISSL_V351,      /* AmiSSL v5.21 */
  AMISSL_V352,      /* AmiSSL v5.22 */
  AMISSL_V353,      /* AmiSSL v5.23 */

  /* ADD NEW VERSIONS ABOVE THIS LINE */
  AMISSL_VMAX
};

#define AMISSL_CURRENT_VERSION (AMISSL_VMAX - 1)

#define AMISSLMASTER_MIN_VERSION 5

#define AMISSL_V10x AMISSL_V102f /* Latest minimum AmiSSL/OpenSSL 1.0.x compatible version */
#define AMISSL_V11x AMISSL_V110d /* Latest minimum AmiSSL/OpenSSL 1.1.x compatible version */
#define AMISSL_V3xx AMISSL_V303  /* Latest minimum AmiSSL/OpenSSL 3.x.x compatible version */

#endif /* !LIBRARIES_AMISSLMASTER_H */
