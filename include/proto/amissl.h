/* Automatically generated header (sfdc 1.5)! Do not edit! */

#ifndef PROTO_AMISSL_H
#define PROTO_AMISSL_H

#include <clib/amissl_protos.h>

#ifndef _NO_INLINE
# if defined(__GNUC__)
#  ifdef __AROS__
#   include <defines/amissl.h>
#  else
#   include <inline/amissl.h>
#  endif
# else
#  include <pragmas/amissl_pragmas.h>
# endif
#endif /* _NO_INLINE */

#ifdef __amigaos4__
# include <interfaces/amissl.h>
# ifndef __NOGLOBALIFACE__
   extern struct AmiSSLIFace *IAmiSSL;
# endif /* __NOGLOBALIFACE__*/
#endif /* !__amigaos4__ */
#ifndef __NOLIBBASE__
  extern struct Library *
# ifdef __CONSTLIBBASEDECL__
   __CONSTLIBBASEDECL__
# endif /* __CONSTLIBBASEDECL__ */
  AmiSSLBase;
#endif /* !__NOLIBBASE__ */

#endif /* !PROTO_AMISSL_H */
