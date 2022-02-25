/*
 * Copyright 2017-2020 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include "output.h"

#if defined(OPENSSL_SYS_AMIGA)
int VARARGS68K test_printf_stdout(const char *fmt, ...)
{
    VA_LIST ap;
    int ret;

    VA_START(ap, fmt);
    ret = test_vprintf_stdout(fmt, VA_ARG(ap, long *));
    VA_END(ap);

    return ret;
}

int VARARGS68K test_printf_stderr(const char *fmt, ...)
{
    VA_LIST ap;
    int ret;

    VA_START(ap, fmt);
    ret = test_vprintf_stderr(fmt, VA_ARG(ap, long *));
    VA_END(ap);

    return ret;
}
#else
int test_printf_stdout(const char *fmt, ...)
{
    va_list ap;
    int ret;

    va_start(ap, fmt);
    ret = test_vprintf_stdout(fmt, ap);
    va_end(ap);

    return ret;
}

int test_printf_stderr(const char *fmt, ...)
{
    va_list ap;
    int ret;

    va_start(ap, fmt);
    ret = test_vprintf_stderr(fmt, ap);
    va_end(ap);

    return ret;
}
#endif

int test_printf_tapout(const char *fmt, ...)
{
    va_list ap;
    int ret;

    va_start(ap, fmt);
    ret = test_vprintf_tapout(fmt, ap);
    va_end(ap);

    return ret;
}

int test_printf_taperr(const char *fmt, ...)
{
    va_list ap;
    int ret;

    va_start(ap, fmt);
    ret = test_vprintf_taperr(fmt, ap);
    va_end(ap);

    return ret;
}
