#ifndef CLIB_RC4_PROTOS_H
#define CLIB_RC4_PROTOS_H

#include <amissl/rc4.h>

const char *RC4_options(void);
void RC4_set_key(RC4_KEY *key, int len, const unsigned char *data);
void RC4(RC4_KEY *key, unsigned long len, const unsigned char *indata, unsigned char *outdata);

#endif /* CLIB_RC4_PROTOS_H */
