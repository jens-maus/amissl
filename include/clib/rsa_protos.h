#ifndef CLIB_RSA_PROTOS_H
#define CLIB_RSA_PROTOS_H

#include <amissl/rsa.h>
#include <amissl/bio.h>

long InitRSA(struct Library *AmiSSLBase, struct Library *SHABase, struct Library *MD5Base);
long CleanupRSA(void);

#endif /* CLIB_RSA_PROTOS_H */
