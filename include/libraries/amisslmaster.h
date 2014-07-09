#ifndef LIBRARIES_AMISSLMASTER_H
#define LIBRARIES_AMISSLMASTER_H

#define AMISSL_V2           0x01  /* OBSOLETE NAME */
#define AMISSL_V096g        0x01  /* AmiSSL v2 */
#define AMISSL_V097g        0x02  /* AmiSSL v3.7 */
#define AMISSL_V097m        0x03  /* unreleased version */
#define AMISSL_V098y        0x04  /* unreleased version */
#define AMISSL_V10x         0x05  /* AmiSSL/OpenSSL 1.0.x compatible versions */

#define AMISSL_CURRENT_VERSION   AMISSL_V10x

#define AMISSLMASTER_MIN_VERSION 3

#endif /* !LIBRARIES_AMISSLMASTER_H */
