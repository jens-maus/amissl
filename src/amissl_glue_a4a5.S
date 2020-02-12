/*
 * Unfortunately, GCC cannot handle compilation of C functions with
 * parameters specifically assigned to registers a4 or a5 on m68k. The only
 * solution is to write the stubs in assembly instead.
 *
 * For a4, since we are using baserel, GCC restores the data pointer into a4,
 * before saving the a4 parameter passed by the caller, so this needs
 * swapping around.
 *
 * For a5, GCC goes completely crazy, and starts messing around with stack
 * frames, even when using -fomit-frame-pointer. a5 can be treated as any
 * other register, but be sure to save/restore it.
 */

.macro restore_a4
	moveal a6@(36),a4
.endm

.text

/* int LIB_RSA_X931_derive_ex(REG(a6, UNUSED __IFACE_OR_BASE), REG(a0, RSA * rsa), REG(a1, BIGNUM * p1), REG(a2, BIGNUM * p2), REG(a3, BIGNUM * q1), REG(d0, BIGNUM * q2), REG(d1, const BIGNUM * Xp1), REG(d2, const BIGNUM * Xp2), REG(d3, const BIGNUM * Xp), REG(d4, const BIGNUM * Xq1), REG(d5, const BIGNUM * Xq2), REG(d6, const BIGNUM * Xq), REG(d7, const BIGNUM * e), REG(a4, BN_GENCB * cb))
{
	return RSA_X931_derive_ex(rsa, p1, p2, q1, q2, Xp1, Xp2, Xp, Xq1, Xq2, Xq, e, cb);
} */

	.even
	.globl _LIB_RSA_X931_derive_ex
	
_LIB_RSA_X931_derive_ex:
	moveml d2-d7/a2-a4,sp@-
	movel a4,sp@-
	movel d7,sp@-
	movel d6,sp@-
	movel d5,sp@-
	movel d4,sp@-
	movel d3,sp@-
	movel d2,sp@-
	movel d1,sp@-
	movel d0,sp@-
	movel a3,sp@-
	movel a2,sp@-
	movel a1,sp@-
	movel a0,sp@-
	restore_a4
	jbsr _RSA_X931_derive_ex
	addw #52,sp
	moveml sp@+,d2-d7/a2-a4
	rts
