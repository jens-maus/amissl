/*
 * Unfortuantely, GCC 2.95.3's libgcc.a uses 64-bit multiplication and
 * division routines that utilize m68k instructions not available on the
 * 68060, crippling performance, so we override the routines required by
 * OpenSSL below and do not link with libgcc.a anymore.
 *
 * 68060 optimised 64-bit multiplication from vbcc, used with permission
 * Copyright (c) 2001-2022 Frank Wille. All Rights Reserved.
 *
 * Remaining code adapted from GNU CC's (2.95.3) libgcc2.c and longlong.h
 * Copyright (c) 1989, 91-98, 1999 Free Software Foundation, Inc.
 */

#if defined(__GNUC__) && defined(__amigaos3__)

typedef 	 int SItype	__attribute__ ((mode (SI)));
typedef unsigned int USItype	__attribute__ ((mode (SI)));
typedef		 int DItype	__attribute__ ((mode (DI)));
typedef unsigned int UDItype	__attribute__ ((mode (DI)));

typedef int word_type __attribute__ ((mode (__word__)));

struct DIstruct {SItype high, low;};

typedef union
{
  struct DIstruct s;
  DItype ll;
} DIunion;

#if defined(__mc68020__) || defined(__mc68030__) || defined(__mc68040__)
/* The '020, '030 and '040 have 32x32->64. */
#define umul_ppmm(w1, w0, u, v) \
  __asm__ ("mulu%.l %3,%1:%0"						\
	   : "=d" ((USItype) (w0)),					\
	     "=d" ((USItype) (w1))					\
	   : "%0" ((USItype) (u)),					\
	     "dmi" ((USItype) (v)))
#else  /* 68000 (and '060) */
/* %/ inserts REGISTER_PREFIX, %# inserts IMMEDIATE_PREFIX.  */
#define umul_ppmm(xh, xl, a, b) \
  __asm__ ("| Inlined umul_ppmm
	move%.l	%2,%/d0
	move%.l	%3,%/d1
	move%.l	%/d0,%/d2
	swap	%/d0
	move%.l	%/d1,%/d3
	swap	%/d1
	move%.w	%/d2,%/d4
	mulu	%/d3,%/d4
	mulu	%/d1,%/d2
	mulu	%/d0,%/d3
	mulu	%/d0,%/d1
	move%.l	%/d4,%/d0
	eor%.w	%/d0,%/d0
	swap	%/d0
	add%.l	%/d0,%/d2
	add%.l	%/d3,%/d2
	jcc	1f
	add%.l	%#65536,%/d1
1:	swap	%/d2
	moveq	%#0,%/d0
	move%.w	%/d2,%/d0
	move%.w	%/d4,%/d2
	move%.l	%/d2,%1
	add%.l	%/d1,%/d0
	move%.l	%/d0,%0"						\
	   : "=g" ((USItype) (xh)),					\
	     "=g" ((USItype) (xl))					\
	   : "g" ((USItype) (a)),					\
	     "g" ((USItype) (b))					\
	   : "d0", "d1", "d2", "d3", "d4")
#endif /* 68000 (and '060) */

#ifdef L_muldi3

#if defined(__mc68060__) && !defined(USE_GCC_MULDI3)

DItype __muldi3 (DIunion factor1, DIunion factor2)
{
  DIunion w;
  
  __asm__ ("| 68060 optimised code from vbcc with permission, by Frank Wille
	move.l  %2,%0	| factor1.lo
	move.l  %0,d2
	move.l  %0,d5
	move.l  %3,%1	| factor2.lo
	move.l  %1,d3
	move.l  %1,d4
	muls.l  %4,d3	| factor1.hi * factor2.lo
	move.l  d3,a0
	move.l  %0,d3
	muls.l  %5,d3	| factor2.hi * factor1.lo
	add.l   d3,a0
	moveq   #16,d3	| d3=shift count
	mulu.w  %1,%0	| d1=num2l16*num1l16
	lsr.l   d3,d4	| d4=num2h16
	lsr.l   d3,d5	| d5=num1h16
	mulu.w  d4,d2	| d2=num2h16*num1l16
	mulu.w  d5,%1	| d0=num1h16*num2l16
	mulu.w  d5,d4	| d4=num1h16*num2h16
	move.l  d2,d5
	lsr.l   d3,d2
	add.w   %1,d5
	addx.l  d2,d4
	lsl.l   d3,d5
	lsr.l   d3,%1
	add.l   a0,%1	| add partial sums early for better instruction scheduling
	add.l   d5,%0	| mull of factor1.lo * factor2.lo
	addx.l  d4,%1	| mulh of factor1.lo * factor2.lo (if add.l a0,d0 was below)" \
	   : "+d" ((USItype) (w.s.low)),	\
	     "+d" ((USItype) (w.s.high))	\
	   : "g" ((USItype) (factor1.s.low)),		\
	     "g" ((USItype) (factor2.s.low)),		\
	     "g" ((USItype) (factor1.s.high)),	\
	     "g" ((USItype) (factor2.s.high))		\
	   : "d2", "d3", "d4", "d5", "a0");

  return w.ll;
}

#else /* !defined(__mc68060__) || defined(USE_GCC_MULDI3) */

#define __umulsidi3(u, v) \
  ({DIunion __w;							\
    umul_ppmm (__w.s.high, __w.s.low, u, v);				\
    __w.ll; })

DItype __muldi3 (DItype u, DItype v)
{
  DIunion w;
  DIunion uu, vv;

  uu.ll = u,
  vv.ll = v;

  w.ll = __umulsidi3 (uu.s.low, vv.s.low);
  w.s.high += ((USItype) uu.s.low * (USItype) vv.s.high
	       + (USItype) uu.s.high * (USItype) vv.s.low);

  return w.ll;
}

#endif /* !defined(__mc68060__) || defined(USE_GCC_MULDI3) */

#endif /* L_muldi3 */

#if defined(L_umoddi3) || defined(L_udivdi3)

#define SI_TYPE_SIZE 32

#define count_leading_zeros(count, x) \
  __asm__ ("bfffo %1{%b2:%b2},%0"					\
	   : "=d" ((USItype) (count))					\
	   : "od" ((USItype) (x)), "n" (0))

#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  __asm__ ("sub%.l %5,%1
	subx%.l %3,%0"							\
	   : "=d" ((USItype) (sh)),					\
	     "=&d" ((USItype) (sl))					\
	   : "0" ((USItype) (ah)),					\
	     "d" ((USItype) (bh)),					\
	     "1" ((USItype) (al)),					\
	     "g" ((USItype) (bl)))

#if defined(__mc68020__) || defined(__mc68030__) || defined(__mc68040__)
/* The '020, '030, and '040 64/32->32q-32r. */
#define UDIV_NEEDS_NORMALIZATION 0
#define udiv_qrnnd(q, r, n1, n0, d) \
  __asm__ ("divu%.l %4,%1:%0"						\
	   : "=d" ((USItype) (q)),					\
	     "=d" ((USItype) (r))					\
	   : "0" ((USItype) (n0)),					\
	     "1" ((USItype) (n1)),					\
	     "dmi" ((USItype) (d)))
#define sdiv_qrnnd(q, r, n1, n0, d) \
  __asm__ ("divs%.l %4,%1:%0"						\
	   : "=d" ((USItype) (q)),					\
	     "=d" ((USItype) (r))					\
	   : "0" ((USItype) (n0)),					\
	     "1" ((USItype) (n1)),					\
	     "dmi" ((USItype) (d)))
#else /* 68000 (and '060) */
#define UDIV_NEEDS_NORMALIZATION 1
#define __ll_B (1L << (SI_TYPE_SIZE / 2))
#define __ll_lowpart(t) ((USItype) (t) % __ll_B)
#define __ll_highpart(t) ((USItype) (t) / __ll_B)
#define udiv_qrnnd(q, r, n1, n0, d) \
  do {									\
    USItype __d1, __d0, __q1, __q0;					\
    USItype __r1, __r0, __m;						\
    __d1 = __ll_highpart (d);						\
    __d0 = __ll_lowpart (d);						\
									\
    __r1 = (n1) % __d1;							\
    __q1 = (n1) / __d1;							\
    __m = (USItype) __q1 * __d0;					\
    __r1 = __r1 * __ll_B | __ll_highpart (n0);				\
    if (__r1 < __m)							\
      {									\
	__q1--, __r1 += (d);						\
	if (__r1 >= (d)) /* i.e. we didn't get carry when adding to __r1 */\
	  if (__r1 < __m)						\
	    __q1--, __r1 += (d);					\
      }									\
    __r1 -= __m;							\
									\
    __r0 = __r1 % __d1;							\
    __q0 = __r1 / __d1;							\
    __m = (USItype) __q0 * __d0;					\
    __r0 = __r0 * __ll_B | __ll_lowpart (n0);				\
    if (__r0 < __m)							\
      {									\
	__q0--, __r0 += (d);						\
	if (__r0 >= (d))						\
	  if (__r0 < __m)						\
	    __q0--, __r0 += (d);					\
      }									\
    __r0 -= __m;							\
									\
    (q) = (USItype) __q1 * __ll_B | __q0;				\
    (r) = __r0;								\
  } while (0)
#endif /* 68000 and '060 */

static inline UDItype __udivmoddi4 (UDItype n, UDItype d, UDItype *rp)
{
  DIunion ww;
  DIunion nn, dd;
  DIunion rr;
  USItype d0, d1, n0, n1, n2;
  USItype q0, q1;
  USItype b, bm;

  nn.ll = n;
  dd.ll = d;

  d0 = dd.s.low;
  d1 = dd.s.high;
  n0 = nn.s.low;
  n1 = nn.s.high;

#if !UDIV_NEEDS_NORMALIZATION
  if (d1 == 0)
    {
      if (d0 > n1)
	{
	  /* 0q = nn / 0D */

	  udiv_qrnnd (q0, n0, n1, n0, d0);
	  q1 = 0;

	  /* Remainder in n0.  */
	}
      else
	{
	  /* qq = NN / 0d */

	  if (d0 == 0)
	    d0 = 1 / d0;	/* Divide intentionally by zero.  */

	  udiv_qrnnd (q1, n1, 0, n1, d0);
	  udiv_qrnnd (q0, n0, n1, n0, d0);

	  /* Remainder in n0.  */
	}

      if (rp != 0)
	{
	  rr.s.low = n0;
	  rr.s.high = 0;
	  *rp = rr.ll;
	}
    }

#else /* UDIV_NEEDS_NORMALIZATION */

  if (d1 == 0)
    {
      if (d0 > n1)
	{
	  /* 0q = nn / 0D */

	  count_leading_zeros (bm, d0);

	  if (bm != 0)
	    {
	      /* Normalize, i.e. make the most significant bit of the
		 denominator set.  */

	      d0 = d0 << bm;
	      n1 = (n1 << bm) | (n0 >> (SI_TYPE_SIZE - bm));
	      n0 = n0 << bm;
	    }

	  udiv_qrnnd (q0, n0, n1, n0, d0);
	  q1 = 0;

	  /* Remainder in n0 >> bm.  */
	}
      else
	{
	  /* qq = NN / 0d */

	  if (d0 == 0)
	    d0 = 1 / d0;	/* Divide intentionally by zero.  */

	  count_leading_zeros (bm, d0);

	  if (bm == 0)
	    {
	      /* From (n1 >= d0) /\ (the most significant bit of d0 is set),
		 conclude (the most significant bit of n1 is set) /\ (the
		 leading quotient digit q1 = 1).

		 This special case is necessary, not an optimization.
		 (Shifts counts of SI_TYPE_SIZE are undefined.)  */

	      n1 -= d0;
	      q1 = 1;
	    }
	  else
	    {
	      /* Normalize.  */

	      b = SI_TYPE_SIZE - bm;

	      d0 = d0 << bm;
	      n2 = n1 >> b;
	      n1 = (n1 << bm) | (n0 >> b);
	      n0 = n0 << bm;

	      udiv_qrnnd (q1, n1, n2, n1, d0);
	    }

	  /* n1 != d0...  */

	  udiv_qrnnd (q0, n0, n1, n0, d0);

	  /* Remainder in n0 >> bm.  */
	}

      if (rp != 0)
	{
	  rr.s.low = n0 >> bm;
	  rr.s.high = 0;
	  *rp = rr.ll;
	}
    }
#endif /* UDIV_NEEDS_NORMALIZATION */

  else
    {
      if (d1 > n1)
	{
	  /* 00 = nn / DD */

	  q0 = 0;
	  q1 = 0;

	  /* Remainder in n1n0.  */
	  if (rp != 0)
	    {
	      rr.s.low = n0;
	      rr.s.high = n1;
	      *rp = rr.ll;
	    }
	}
      else
	{
	  /* 0q = NN / dd */

	  count_leading_zeros (bm, d1);
	  if (bm == 0)
	    {
	      /* From (n1 >= d1) /\ (the most significant bit of d1 is set),
		 conclude (the most significant bit of n1 is set) /\ (the
		 quotient digit q0 = 0 or 1).

		 This special case is necessary, not an optimization.  */

	      /* The condition on the next line takes advantage of that
		 n1 >= d1 (true due to program flow).  */
	      if (n1 > d1 || n0 >= d0)
		{
		  q0 = 1;
		  sub_ddmmss (n1, n0, n1, n0, d1, d0);
		}
	      else
		q0 = 0;

	      q1 = 0;

	      if (rp != 0)
		{
		  rr.s.low = n0;
		  rr.s.high = n1;
		  *rp = rr.ll;
		}
	    }
	  else
	    {
	      USItype m1, m0;
	      /* Normalize.  */

	      b = SI_TYPE_SIZE - bm;

	      d1 = (d1 << bm) | (d0 >> b);
	      d0 = d0 << bm;
	      n2 = n1 >> b;
	      n1 = (n1 << bm) | (n0 >> b);
	      n0 = n0 << bm;

	      udiv_qrnnd (q0, n1, n2, n1, d1);
	      umul_ppmm (m1, m0, q0, d0);

	      if (m1 > n1 || (m1 == n1 && m0 > n0))
		{
		  q0--;
		  sub_ddmmss (m1, m0, m1, m0, d1, d0);
		}

	      q1 = 0;

	      /* Remainder in (n1n0 - m1m0) >> bm.  */
	      if (rp != 0)
		{
		  sub_ddmmss (n1, n0, n1, n0, m1, m0);
		  rr.s.low = (n1 << b) | (n0 >> bm);
		  rr.s.high = n1 >> bm;
		  *rp = rr.ll;
		}
	    }
	}
    }

  ww.s.low = q0;
  ww.s.high = q1;
  return ww.ll;
}
#endif /* defined(L_umoddi3) || defined(L_udivdi3) */

#ifdef L_umoddi3
UDItype __umoddi3 (UDItype u, UDItype v)
{
  UDItype w;

  (void) __udivmoddi4 (u, v, &w);

  return w;
}
#endif /* L_umoddi3 */

#ifdef L_udivdi3
UDItype __udivdi3 (UDItype n, UDItype d)
{
  return __udivmoddi4 (n, d, (UDItype *) 0);
}
#endif /* L_udivdi3 */

#define BITS_PER_UNIT 8

#ifdef L_lshrdi3
/* Unless shift functions are defined whith full ANSI prototypes,
   parameter b will be promoted to int if word_type is smaller than an int.  */
DItype __lshrdi3 (DItype u, word_type b)
{
  DIunion w;
  word_type bm;
  DIunion uu;

  if (b == 0)
    return u;

  uu.ll = u;

  bm = (sizeof (SItype) * BITS_PER_UNIT) - b;
  if (bm <= 0)
    {
      w.s.high = 0;
      w.s.low = (USItype)uu.s.high >> -bm;
    }
  else
    {
      USItype carries = (USItype)uu.s.high << bm;
      w.s.high = (USItype)uu.s.high >> b;
      w.s.low = ((USItype)uu.s.low >> b) | carries;
    }

  return w.ll;
}
#endif /* L_lshrdi3 */

#ifdef L_ashldi3
/* Unless shift functions are defined whith full ANSI prototypes,
   parameter b will be promoted to int if word_type is smaller than an int.  */
DItype __ashldi3 (DItype u, word_type b)
{
  DIunion w;
  word_type bm;
  DIunion uu;

  if (b == 0)
    return u;

  uu.ll = u;

  bm = (sizeof (SItype) * BITS_PER_UNIT) - b;
  if (bm <= 0)
    {
      w.s.low = 0;
      w.s.high = (USItype)uu.s.low << -bm;
    }
  else
    {
      USItype carries = (USItype)uu.s.low >> bm;
      w.s.low = (USItype)uu.s.low << b;
      w.s.high = ((USItype)uu.s.high << b) | carries;
    }

  return w.ll;
}
#endif /* L_ashldi3 */

#endif /* defined(__GNUC__) && defined(__amigaos3__) */
