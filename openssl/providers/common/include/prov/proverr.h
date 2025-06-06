/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 2020-2025 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OSSL_PROVERR_H
# define OSSL_PROVERR_H
# if defined(__GNUC__) && (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ > 3))
# pragma once
# endif

# include <openssl/opensslconf.h>
# include <openssl/symhacks.h>

# ifdef  __cplusplus
extern "C" {
# endif

int ossl_err_load_PROV_strings(void);

# ifdef  __cplusplus
}
# endif
#endif
