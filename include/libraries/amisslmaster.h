#ifndef LIBRARIES_AMISSLMASTER_H
#define LIBRARIES_AMISSLMASTER_H

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

#define AMISSL_V10x         AMISSL_V102f /* Latest minimum AmiSSL/OpenSSL 1.0.x compatible version */
#define AMISSL_V11x         AMISSL_V110d /* Latest minimum AmiSSL/OpenSSL 1.1.x compatible version */

#define AMISSL_CURRENT_VERSION   AMISSL_V111i

#define AMISSLMASTER_MIN_VERSION 4

#endif /* !LIBRARIES_AMISSLMASTER_H */
