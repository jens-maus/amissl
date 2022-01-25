#include "amissl_glue.h"

// ---

int RSA_X931_derive_ex_amiga_1(RSA *rsa, BIGNUM *p1, BIGNUM *p2,
                               BIGNUM *q1, BIGNUM *q2,
                               const BIGNUM *Xp1, void *moreargs)
{
  int result, *a = (int *)moreargs;
  if ((a != NULL))
  {
    result = RSA_X931_derive_ex(rsa, p1, p2, q1, q2, Xp1,
				(const BIGNUM *)a[0], (const BIGNUM *)a[1],
				(const BIGNUM *)a[2], (const BIGNUM *)a[3],
				(const BIGNUM *)a[4], (const BIGNUM *)a[5],
				(BN_GENCB *)a[6]);
    free(a);
  }
  else
  {
    result = 0;
  }
  return result;
}

void *RSA_X931_derive_ex_amiga_2(const BIGNUM *Xp2, const BIGNUM *Xp,
                                 const BIGNUM *Xq1, const BIGNUM *Xq2,
                                 const BIGNUM *Xq, const BIGNUM *e,
                                 BN_GENCB *cb)
{
  int *moreargs = malloc(7*sizeof(int));
  if (moreargs != NULL)
  {
    moreargs[0] = (int)Xp2;
    moreargs[1] = (int)Xp;
    moreargs[2] = (int)Xq1;
    moreargs[3] = (int)Xq2;
    moreargs[4] = (int)Xq;
    moreargs[5] = (int)e;
    moreargs[6] = (int)cb;
  }
  return (void *)moreargs;
}

// ---
