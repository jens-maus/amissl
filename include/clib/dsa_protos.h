#ifndef CLIB_DSA_PROTOS_H
#define CLIB_DSA_PROTOS_H

#include <amissl/dsa.h>
#include <amissl/bn.h>

long InitDSA(struct Library *AmiSSLBase, struct Library *SHABase);
long CleanupDSA(void);

#endif /* CLIB_DSA_PROTOS_H */
