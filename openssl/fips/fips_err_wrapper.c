#include <openssl/opensslconf.h>

#ifdef OPENSSL_FIPS
# include "fips_err.h"
#elif defined(AMISSL)
#else
static void *dummy=&dummy;
#endif
