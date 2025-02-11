/*
 * Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 * Copyright (c) 2014-2025 AmiSSL Open Source Team.
 * All Rights Reserved.
 *
 * This file has been modified for use with AmiSSL for AmigaOS-based systems.
 *
 * Copyright 1995-2023 The OpenSSL Project Authors. All Rights Reserved.
 * Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#if !defined(PROTO_AMISSL_H) && !defined(AMISSL_COMPILE)
# include <proto/amissl.h>
#endif

#ifndef OPENSSL_THREAD_H
# define OPENSSL_THREAD_H

# define OSSL_THREAD_SUPPORT_FLAG_THREAD_POOL (1U<<0)
# define OSSL_THREAD_SUPPORT_FLAG_DEFAULT_SPAWN (1U<<1)

# include <openssl/types.h>

# ifdef  __cplusplus
extern "C" {
# endif

uint32_t OSSL_get_thread_support_flags(void);
int OSSL_set_max_threads(OSSL_LIB_CTX *ctx, uint64_t max_threads);
uint64_t OSSL_get_max_threads(OSSL_LIB_CTX *ctx);

# ifdef  __cplusplus
}
# endif

#endif /* OPENSSL_THREAD_H */
