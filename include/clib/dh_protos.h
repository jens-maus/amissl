#ifndef CLIB_DH_PROTOS_H
#define CLIB_DH_PROTOS_H

#include <amissl/dh.h>
#include <amissl/bn.h>

long InitDH(struct Library *AmiSSLBase, struct Library *SHABase);
long CleanupDH(void);

#endif /* CLIB_DH_PROTOS_H */
