/* e_os2.h */

#ifndef HEADER_E_OS2_H
#define HEADER_E_OS2_H

#include <amissl/amisslconf.h> /* OPENSSL_UNISTD */

#ifdef  __cplusplus
extern "C" {
#endif

#define OPENSSL_UNISTD_IO OPENSSL_UNISTD
#define OPENSSL_DECLARE_EXIT /* declared in unistd.h */

#define OPENSSL_EXTERN extern
#define OPENSSL_GLOBAL

#ifdef  __cplusplus
}
#endif
#endif
