/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2022 AmiSSL Open Source Team.
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License in the file LICENSE in the
 source distribution or at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 AmiSSL Official Support Site: https://github.com/jens-maus/amissl

***************************************************************************/

#undef AMISSL_COMPILE

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <signal.h>
#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <internal/amissl_compiler.h>

/* Used by OpenSSL tool and test programs to provide consistent buffer flushing
** and Ctrl-C checking due to these programs currently mixing stdio stdout/stderr
** output routines with their BIO equivalents (which can't check for Ctrl-C).
*/

extern BIO *bio_out, *bio_err;

int assl_vfbioprintf(const char *func, FILE *fp, BIO *bio, const char *fmt, long *args)
{
  int result = -1;

  if (SetSignal(0L,SIGBREAKF_CTRL_C) & SIGBREAKF_CTRL_C)
  {
    (void)BIO_flush(bio_out);
    (void)BIO_flush(bio_err);
    raise(SIGINT);
  }

  if (!bio)
  {
    if (fp == stdout)
      bio = bio_out;
    else if (fp == stderr)
      bio = bio_err;
    else
      Printf("*** WARNING (%s): %lx is neither stdout (%lx) nor stderr (%lx) in stubs, returning -1!\n", func, fp, stdout, stderr);
  }

  if (bio)
  {
    result = args ? BIO_vprintf(bio,fmt,args) : BIO_puts(bio,fmt);
  }

  return result;
}

VARARGS68K int assl_fprintf(FILE *fp, const char *fmt, ...)
{
  int result;
  VA_LIST va;

  VA_START(va,fmt);
  result = assl_vfbioprintf("assl_fprintf", fp, NULL, fmt, VA_ARG(va,long *));
  VA_END(va);

  return result;
}

VARARGS68K int assl_bioprintf(BIO *bio, const char *fmt, ...)
{
  int result;
  VA_LIST va;

  VA_START(va,fmt);
  result = assl_vfbioprintf("assl_bioprintf", NULL, bio, fmt, VA_ARG(va,long *));
  VA_END(va);

  return result;
}

int assl_biovprintf(BIO *bio, const char *fmt, long *args)
{
  return assl_vfbioprintf("assl_biovprintf", NULL, bio, fmt, args);
}
  
int assl_fputs(const char *str, FILE *fp)
{
  return assl_vfbioprintf("assl_fputs", fp, NULL, str, NULL);
}

int assl_bioputs(BIO *bio, const char *str)
{
  return assl_vfbioprintf("assl_bioputs", NULL, bio, str, NULL);
}

int assl_fflush(FILE *fp)
{
  if (fp == stdout)
    return BIO_flush(bio_out);
  else if (fp == stderr)
    return BIO_flush(bio_err);
  else
    return fflush(fp);
}
