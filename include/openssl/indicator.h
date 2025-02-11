/*
 * Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 * Copyright (c) 2014-2025 AmiSSL Open Source Team.
 * All Rights Reserved.
 *
 * This file has been modified for use with AmiSSL for AmigaOS-based systems.
 *
 * Copyright 2024 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#if !defined(PROTO_AMISSL_H) && !defined(AMISSL_COMPILE)
# include <proto/amissl.h>
#endif

#ifndef OPENSSL_INDICATOR_H
# define OPENSSL_INDICATOR_H
# if defined(__GNUC__) && (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ > 3))
#  pragma once
# endif

# ifdef __cplusplus
extern "C" {
# endif

#include <openssl/params.h>

typedef int (OSSL_INDICATOR_CALLBACK)(const char *type, const char *desc,
                                      const OSSL_PARAM params[]);

void OSSL_INDICATOR_set_callback(OSSL_LIB_CTX *libctx,
                                 OSSL_INDICATOR_CALLBACK *cb);
void OSSL_INDICATOR_get_callback(OSSL_LIB_CTX *libctx,
                                 OSSL_INDICATOR_CALLBACK **cb);

# ifdef __cplusplus
}
# endif
#endif /* OPENSSL_INDICATOR_H */
