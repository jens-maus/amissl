#ifndef __INLINE_MACROS_H
#define __INLINE_MACROS_H

/*
	MorphOS PowerPC inline macros

	This is the same version as distributed with the MorphOS SDK, but this one
	has certain required but missing macros added, i.e. LP2NRFP().
*/

#ifndef EMUL_EMULINTERFACE_H
#include <emul/emulinterface.h>
#endif
#ifndef EMUL_EMULREGS_H
#include <emul/emulregs.h>
#endif


#define __CACHE_START(start) ((void *) ((unsigned long int) (start) & ~31))
#define __CACHE_LENGTH(start,length) ({ unsigned long int __clstart = (unsigned long int) (start); (((length) + __clstart + 31) & ~31) - (__clstart & ~31); })


#ifndef __MORPHOS_NODIRECTCALL

/*
 * Use directcalls, faster.
 */
#define	REG_d0	REG_D0
#define	REG_d1	REG_D1
#define	REG_d2	REG_D2
#define	REG_d3	REG_D3
#define	REG_d4	REG_D4
#define	REG_d5	REG_D5
#define	REG_d6	REG_D6
#define	REG_d7	REG_D7
#define	REG_a0	REG_A0
#define	REG_a1	REG_A1
#define	REG_a2	REG_A2
#define	REG_a3	REG_A3
#define	REG_a4	REG_A4
#define	REG_a5	REG_A5
#define	REG_a6	REG_A6
#define	REG_a7	REG_A7


#define LP0(offs, rt, name, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP0NR(offs, name, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP1(offs, rt, name, t1, v1, r1, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP1NR(offs, name, t1, v1, r1, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP1FP(offs, rt, name, t1, v1, r1, bt, bn, fpt, cm1, cs1, cl1, cm2, cs2, cl2 )   \
({                                                        \
	typedef fpt;                                      \
	t1 _##name##_v1 = v1;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP1FR(offs, rt, name, t1, v1, r1, bt, bn, fpr, cm1, cs1, cl1, cm2, cs2, cl2 )   \
({                                                        \
	typedef fpr;                                      \
	t1 _##name##_v1 = v1;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP2(offs, rt, name, t1, v1, r1, t2, v2, r2, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP2NR(offs, name, t1, v1, r1, t2, v2, r2, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP2NRFP(offs, name, t1, v1, r1, t2, v2, r2, bt, bn, fpt, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	typedef fpt;                                      \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP2UB(offs, rt, name, t1, v1, r1, t2, v2, r2, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP2FP(offs, rt, name, t1, v1, r1, t2, v2, r2, bt, bn, fpt, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	typedef fpt;                                      \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP2FPFR(offs, rt, name, t1, v1, r1, t2, v2, r2, bt, bn, fpt, fpr, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	typedef fpr;                                      \
	typedef fpt;                                      \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP3(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP3NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP3UB(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP3NRUB(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP3FP(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, bt, bn, fpt, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	typedef fpt;                                      \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);\
})

#define LP3FP2(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, bt, bn, fpt1, fpt2, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	typedef fpt1;                                     \
	typedef fpt2;                                     \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);\
})

#define LP3NRFP(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, bt, bn, fpt, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	typedef fpt;                                      \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP3NRFP2(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, bt, bn, fpt1, fpt2, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	typedef fpt1;                                     \
	typedef fpt2;                                     \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP4(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP4NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP4FP(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, bt, bn, fpt, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	typedef fpt;                                      \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP5(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP5NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP5FP(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, bt, bn, fpt, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	typedef fpt;                                      \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP6(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	t6 _##name##_v6 = v6;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_##r6           = (ULONG) _##name##_v6;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP6NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	t6 _##name##_v6 = v6;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_##r6           = (ULONG) _##name##_v6;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP6FP(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, bt, bn, fpt, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	typedef fpt;                                         \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	t6 _##name##_v6 = v6;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_##r6           = (ULONG) _##name##_v6;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP7(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	t6 _##name##_v6 = v6;                             \
	t7 _##name##_v7 = v7;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_##r6           = (ULONG) _##name##_v6;        \
	REG_##r7           = (ULONG) _##name##_v7;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP7NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	t6 _##name##_v6 = v6;                             \
	t7 _##name##_v7 = v7;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_##r6           = (ULONG) _##name##_v6;        \
	REG_##r7           = (ULONG) _##name##_v7;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP8(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	t6 _##name##_v6 = v6;                             \
	t7 _##name##_v7 = v7;                             \
	t8 _##name##_v8 = v8;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_##r6           = (ULONG) _##name##_v6;        \
	REG_##r7           = (ULONG) _##name##_v7;        \
	REG_##r8           = (ULONG) _##name##_v8;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP8NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	t6 _##name##_v6 = v6;                             \
	t7 _##name##_v7 = v7;                             \
	t8 _##name##_v8 = v8;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_##r6           = (ULONG) _##name##_v6;        \
	REG_##r7           = (ULONG) _##name##_v7;        \
	REG_##r8           = (ULONG) _##name##_v8;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP9(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, t9, v9, r9, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	t6 _##name##_v6 = v6;                             \
	t7 _##name##_v7 = v7;                             \
	t8 _##name##_v8 = v8;                             \
	t9 _##name##_v9 = v9;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_##r6           = (ULONG) _##name##_v6;        \
	REG_##r7           = (ULONG) _##name##_v7;        \
	REG_##r8           = (ULONG) _##name##_v8;        \
	REG_##r9           = (ULONG) _##name##_v9;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP9NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, t9, v9, r9, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	t6 _##name##_v6 = v6;                             \
	t7 _##name##_v7 = v7;                             \
	t8 _##name##_v8 = v8;                             \
	t9 _##name##_v9 = v9;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_##r6           = (ULONG) _##name##_v6;        \
	REG_##r7           = (ULONG) _##name##_v7;        \
	REG_##r8           = (ULONG) _##name##_v8;        \
	REG_##r9           = (ULONG) _##name##_v9;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP10(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, t9, v9, r9, ta, va, ra, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	t6 _##name##_v6 = v6;                             \
	t7 _##name##_v7 = v7;                             \
	t8 _##name##_v8 = v8;                             \
	t9 _##name##_v9 = v9;                             \
	ta _##name##_va = va;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_##r6           = (ULONG) _##name##_v6;        \
	REG_##r7           = (ULONG) _##name##_v7;        \
	REG_##r8           = (ULONG) _##name##_v8;        \
	REG_##r9           = (ULONG) _##name##_v9;        \
	REG_##ra           = (ULONG) _##name##_va;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP10NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, t9, v9, r9, ta, va, ra, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	t6 _##name##_v6 = v6;                             \
	t7 _##name##_v7 = v7;                             \
	t8 _##name##_v8 = v8;                             \
	t9 _##name##_v9 = v9;                             \
	ta _##name##_va = va;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_##r6           = (ULONG) _##name##_v6;        \
	REG_##r7           = (ULONG) _##name##_v7;        \
	REG_##r8           = (ULONG) _##name##_v8;        \
	REG_##r9           = (ULONG) _##name##_v9;        \
	REG_##ra           = (ULONG) _##name##_va;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP11(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, t9, v9, r9, ta, va, ra, tb, vb, rb, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	t6 _##name##_v6 = v6;                             \
	t7 _##name##_v7 = v7;                             \
	t8 _##name##_v8 = v8;                             \
	t9 _##name##_v9 = v9;                             \
	ta _##name##_va = va;                             \
	tb _##name##_vb = vb;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_##r6           = (ULONG) _##name##_v6;        \
	REG_##r7           = (ULONG) _##name##_v7;        \
	REG_##r8           = (ULONG) _##name##_v8;        \
	REG_##r9           = (ULONG) _##name##_v9;        \
	REG_##ra           = (ULONG) _##name##_va;        \
	REG_##rb           = (ULONG) _##name##_vb;        \
	REG_A6             = (ULONG) (bn);                \
	(rt) (*MyEmulHandle->EmulCallDirectOS)(-offs);    \
})

#define LP11NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, t9, v9, r9, ta, va, ra, tb, vb, rb, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	t6 _##name##_v6 = v6;                             \
	t7 _##name##_v7 = v7;                             \
	t8 _##name##_v8 = v8;                             \
	t9 _##name##_v9 = v9;                             \
	ta _##name##_va = va;                             \
	tb _##name##_vb = vb;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_##r6           = (ULONG) _##name##_v6;        \
	REG_##r7           = (ULONG) _##name##_v7;        \
	REG_##r8           = (ULONG) _##name##_v8;        \
	REG_##r9           = (ULONG) _##name##_v9;        \
	REG_##ra           = (ULONG) _##name##_va;        \
	REG_##rb           = (ULONG) _##name##_vb;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#define LP12NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, t9, v9, r9, ta, va, ra, tb, vb, rb, tc, vc, rc, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                        \
	t1 _##name##_v1 = v1;                             \
	t2 _##name##_v2 = v2;                             \
	t3 _##name##_v3 = v3;                             \
	t4 _##name##_v4 = v4;                             \
	t5 _##name##_v5 = v5;                             \
	t6 _##name##_v6 = v6;                             \
	t7 _##name##_v7 = v7;                             \
	t8 _##name##_v8 = v8;                             \
	t9 _##name##_v9 = v9;                             \
	ta _##name##_va = va;                             \
	tb _##name##_vb = vb;                             \
	tc _##name##_vc = vc;                             \
	REG_##r1           = (ULONG) _##name##_v1;        \
	REG_##r2           = (ULONG) _##name##_v2;        \
	REG_##r3           = (ULONG) _##name##_v3;        \
	REG_##r4           = (ULONG) _##name##_v4;        \
	REG_##r5           = (ULONG) _##name##_v5;        \
	REG_##r6           = (ULONG) _##name##_v6;        \
	REG_##r7           = (ULONG) _##name##_v7;        \
	REG_##r8           = (ULONG) _##name##_v8;        \
	REG_##r9           = (ULONG) _##name##_v9;        \
	REG_##ra           = (ULONG) _##name##_va;        \
	REG_##rb           = (ULONG) _##name##_vb;        \
	REG_##rc           = (ULONG) _##name##_vc;        \
	REG_A6             = (ULONG) (bn);                \
	(void) (*MyEmulHandle->EmulCallDirectOS)(-offs);  \
})

#else

#define LP0(offs, rt, name, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP0NR(offs, name, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#define LP1(offs, rt, name, t1, v1, r1, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP1NR(offs, name, t1, v1, r1, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#define LP1FP(offs, rt, name, t1, v1, r1, bt, bn, fpt, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	typedef fpt;                                         \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP2(offs, rt, name, t1, v1, r1, t2, v2, r2, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP2NR(offs, name, t1, v1, r1, t2, v2, r2, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#define LP2UB(offs, rt, name, t1, v1, r1, t2, v2, r2, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP2FP(offs, rt, name, t1, v1, r1, t2, v2, r2, bt, bn, fpt, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	typedef fpt;                                         \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP3(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP3NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#define LP3UB(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP3NRUB(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#define LP3FP(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, bt, bn, fpt, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	typedef fpt;                                         \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP3NRFP(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, bt, bn, fpt, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	typedef fpt;                                         \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#define LP4(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP4NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#define LP4FP(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, bt, bn, fpt, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	typedef fpt;                                         \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP5(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP5NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#define LP5FP(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, bt, bn, fpt, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	typedef fpt;                                         \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP6(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_##r6           = (ULONG) (v6);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP6NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_##r6           = (ULONG) (v6);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#define LP7(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_##r6           = (ULONG) (v6);    \
	_##name##_caos.reg_##r7           = (ULONG) (v7);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP7NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_##r6           = (ULONG) (v6);    \
	_##name##_caos.reg_##r7           = (ULONG) (v7);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#define LP8(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_##r6           = (ULONG) (v6);    \
	_##name##_caos.reg_##r7           = (ULONG) (v7);    \
	_##name##_caos.reg_##r8           = (ULONG) (v8);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP8NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_##r6           = (ULONG) (v6);    \
	_##name##_caos.reg_##r7           = (ULONG) (v7);    \
	_##name##_caos.reg_##r8           = (ULONG) (v8);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#define LP9(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, t9, v9, r9, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_##r6           = (ULONG) (v6);    \
	_##name##_caos.reg_##r7           = (ULONG) (v7);    \
	_##name##_caos.reg_##r8           = (ULONG) (v8);    \
	_##name##_caos.reg_##r9           = (ULONG) (v9);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP9NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, t9, v9, r9, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_##r6           = (ULONG) (v6);    \
	_##name##_caos.reg_##r7           = (ULONG) (v7);    \
	_##name##_caos.reg_##r8           = (ULONG) (v8);    \
	_##name##_caos.reg_##r9           = (ULONG) (v9);    \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#define LP10(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, t9, v9, r9, t10, v10, r10, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_##r6           = (ULONG) (v6);    \
	_##name##_caos.reg_##r7           = (ULONG) (v7);    \
	_##name##_caos.reg_##r8           = (ULONG) (v8);    \
	_##name##_caos.reg_##r9           = (ULONG) (v9);    \
	_##name##_caos.reg_##r10          = (ULONG) (v10);   \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP10NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, t9, v9, r9, t10, v10, r10, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_##r6           = (ULONG) (v6);    \
	_##name##_caos.reg_##r7           = (ULONG) (v7);    \
	_##name##_caos.reg_##r8           = (ULONG) (v8);    \
	_##name##_caos.reg_##r9           = (ULONG) (v9);    \
	_##name##_caos.reg_##r10          = (ULONG) (v10);   \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#define LP11(offs, rt, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, t9, v9, r9, t10, v10, r10, t11, v11, r11, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_##r6           = (ULONG) (v6);    \
	_##name##_caos.reg_##r7           = (ULONG) (v7);    \
	_##name##_caos.reg_##r8           = (ULONG) (v8);    \
	_##name##_caos.reg_##r9           = (ULONG) (v9);    \
	_##name##_caos.reg_##r10          = (ULONG) (v10);   \
	_##name##_caos.reg_##r11          = (ULONG) (v11);   \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(rt) (*MyEmulHandle->EmulCallOS)(&_##name##_caos);   \
})

#define LP11NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, t9, v9, r9, t10, v10, r10, t11, v11, r11, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_##r6           = (ULONG) (v6);    \
	_##name##_caos.reg_##r7           = (ULONG) (v7);    \
	_##name##_caos.reg_##r8           = (ULONG) (v8);    \
	_##name##_caos.reg_##r9           = (ULONG) (v9);    \
	_##name##_caos.reg_##r10          = (ULONG) (v10);   \
	_##name##_caos.reg_##r11          = (ULONG) (v11);   \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#define LP12NR(offs, name, t1, v1, r1, t2, v2, r2, t3, v3, r3, t4, v4, r4, t5, v5, r5, t6, v6, r6, t7, v7, r7, t8, v8, r8, t9, v9, r9, t10, v10, r10, t11, v11, r11, t12, v12, r12, bt, bn, cm1, cs1, cl1, cm2, cs2, cl2 ) \
({                                                           \
	struct EmulCaos _##name##_caos;                      \
	_##name##_caos.reg_##r1           = (ULONG) (v1);    \
	_##name##_caos.reg_##r2           = (ULONG) (v2);    \
	_##name##_caos.reg_##r3           = (ULONG) (v3);    \
	_##name##_caos.reg_##r4           = (ULONG) (v4);    \
	_##name##_caos.reg_##r5           = (ULONG) (v5);    \
	_##name##_caos.reg_##r6           = (ULONG) (v6);    \
	_##name##_caos.reg_##r7           = (ULONG) (v7);    \
	_##name##_caos.reg_##r8           = (ULONG) (v8);    \
	_##name##_caos.reg_##r9           = (ULONG) (v9);    \
	_##name##_caos.reg_##r10          = (ULONG) (v10);   \
	_##name##_caos.reg_##r11          = (ULONG) (v11);   \
	_##name##_caos.reg_##r12          = (ULONG) (v12);   \
	_##name##_caos.reg_a6             = (ULONG) (bn);    \
	_##name##_caos.caos_Un.Offset     =       -(offs);   \
	(void) (*MyEmulHandle->EmulCallOS)(&_##name##_caos); \
})

#endif /* __MORPHOS_NODIRECTCALL */
#endif /* __INLINE_MACROS_H */
