/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * the Systems Programming Group of the University of Utah Computer
 * Science Department.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that: (1) source distributions retain this entire copyright
 * notice and comment, and (2) distributions including binaries display
 * the following acknowledgement:  ``This product includes software
 * developed by the University of California, Berkeley and its contributors''
 * in the documentation or other materials provided with the distribution
 * and in all advertising materials mentioning features or use of this
 * software. Neither the name of the University nor the names of its
 * contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#define ENTRY(x) asm(".globl _" #x "; .even; _" #x ":");

/*
 * NOTE: this guy returns result compatible with the VAX assembly version.
 * The C version on the portable gen directory returns different results
 * (different signs!) when comparing chars with the high bit on.  Who is
 * right??
 */
ENTRY(strncmp)
asm("
	movl	sp@(12),d1	/* count */
	jeq	strncmpdone	/* nothing to do */
	movl	sp@(4),a0	/* a0 = string1 */
	movl	sp@(8),a1	/* a1 = string2 */
strncmploop:
	movb	a0@+,d0		/* get *string1 */
	cmpb	a1@+,d0		/* compare a byte */
	jne	strncmpexit	/* not equal, break out */
	tstb	d0		/* at end of string1? */
	jeq	strncmpdone	/* yes, all done */
	subql	#1,d1		/* no, adjust count */
	jne	strncmploop	/* more to do, keep going */
strncmpdone:
	moveq	#0,d0		/* strings are equal */
	rts
strncmpexit:
	subb	a1@-,d0		/* *string1 - *string2 */
	extw	d0
	extl	d0
	rts
");
