#ifndef CLIB_MDC2_PROTOS_H
#define CLIB_MDC2_PROTOS_H

#include <amissl/mdc2.h>

long InitMDC2(struct Library *DESBase);
void MDC2_Init(MDC2_CTX *c);
void MDC2_Update(MDC2_CTX *c, const unsigned char *data, unsigned long len);
void MDC2_Final(unsigned char *md, MDC2_CTX *c);
unsigned char *MDC2(const unsigned char *d, unsigned long n, unsigned char *md);

#endif /* CLIB_MDC2_PROTOS_H */
