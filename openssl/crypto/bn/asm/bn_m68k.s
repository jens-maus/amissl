/* Copyright (C) 2002 by Howard Chu <hyc@highlandsun.com>
 *
 * Rights for redistribution and usage in source and binary forms are
 * granted according to the OpenSSL license. Warranty of any kind is
 * disclaimed.
 */

/* This file is written for GNU as. All of the code is hand written by
 * me. The code is suitable for Motorola 68020-68060 and all CPU32-based
 * processors providing 64-bit multiply/divide instructions. On a 68030
 * this code is over 4 times faster than the gcc -O3 code for RSA/DSA.
 * I haven't paid any attention to instruction sequencing; there may be
 * room for some further improvement.
 */

.text
	.even
.globl _bn_mul_add_words
_bn_mul_add_words:
	movm.l #0x3c00,-(sp)
	move.l 20(sp),a0
	move.l 24(sp),a1
	clr.l d0
	move.l d0,d5		/* Keep a 0 handy for addx carry bits */
	move.l 28(sp),d4
	jble 3f

	move.l 32(sp),d3
	moveq.l #-4,d2
	and.l d4,d2
	jbeq 2f
1:
	move.l d3,d1
	mulu.l (a1)+,d2:d1
	add.l d0,d1
	addx.l d5,d2
	add.l (a0),d1
	addx.l d5,d2
	move.l d1,(a0)+
	move.l d2,d0

	move.l d3,d1
	mulu.l (a1)+,d2:d1
	add.l d0,d1
	addx.l d5,d2
	add.l (a0),d1
	addx.l d5,d2
	move.l d1,(a0)+
	move.l d2,d0

	move.l d3,d1
	mulu.l (a1)+,d2:d1
	add.l d0,d1
	addx.l d5,d2
	add.l (a0),d1
	addx.l d5,d2
	move.l d1,(a0)+
	move.l d2,d0

	move.l d3,d1
	mulu.l (a1)+,d2:d1
	add.l d0,d1
	addx.l d5,d2
	add.l (a0),d1
	addx.l d5,d2
	move.l d1,(a0)+
	move.l d2,d0

	moveq.l #-4,d2
	add.l d2,d4
	and.l d4,d2
	jbne 1b
2:
	tst.l d4
	jbeq 3f

	move.l d3,d1
	mulu.l (a1)+,d2:d1
	add.l d0,d1
	addx.l d5,d2
	add.l (a0),d1
	addx.l d5,d2
	move.l d1,(a0)+
	move.l d2,d0

	subq.l #1,d4
	jbeq 3f

	move.l d3,d1
	mulu.l (a1)+,d2:d1
	add.l d0,d1
	addx.l d5,d2
	add.l (a0),d1
	addx.l d5,d2
	move.l d1,(a0)+
	move.l d2,d0

	subq.l #1,d4
	jbeq 3f

	move.l d3,d1
	mulu.l (a1)+,d2:d1
	add.l d0,d1
	addx.l d5,d2
	add.l (a0),d1
	addx.l d5,d2
	move.l d1,(a0)+
	move.l d2,d0
3:
	movm.l (sp)+,#0x003c
	rts

	.even
.globl _bn_mul_words
_bn_mul_words:
	movm.l #0x3c00,-(sp)
	move.l 20(sp),a0
	move.l 24(sp),a1
	clr.l d0
	move.l d0,d5
	move.l 28(sp),d4
	jble 3f

	move.l 32(sp),d3
	moveq.l #-4,d2
	and.l d4,d2
	jbeq 2f
1:
	move.l d3,d1
	mulu.l (a1)+,d2:d1
	add.l d0,d1
	addx.l d5,d2
	move.l d1,(a0)+
	move.l d2,d0

	move.l d3,d1
	mulu.l (a1)+,d2:d1
	add.l d0,d1
	addx.l d5,d2
	move.l d1,(a0)+
	move.l d2,d0

	move.l d3,d1
	mulu.l (a1)+,d2:d1
	add.l d0,d1
	addx.l d5,d2
	move.l d1,(a0)+
	move.l d2,d0

	move.l d3,d1
	mulu.l (a1)+,d2:d1
	add.l d0,d1
	addx.l d5,d2
	move.l d1,(a0)+
	move.l d2,d0

	moveq.l #-4,d2
	add.l d2,d4
	and.l d4,d2
	jbne 1b
2:
	tst.l d4
	jbeq 3f

	move.l d3,d1
	mulu.l (a1)+,d2:d1
	add.l d0,d1
	addx.l d5,d2
	move.l d1,(a0)+
	move.l d2,d0

	subq.l #1,d4
	jbeq 3f

	move.l d3,d1
	mulu.l (a1)+,d2:d1
	add.l d0,d1
	addx.l d5,d2
	move.l d1,(a0)+
	move.l d2,d0

	subq.l #1,d4
	jbeq 3f

	move.l d3,d1
	mulu.l (a1)+,d2:d1
	add.l d0,d1
	addx.l d5,d2
	move.l d1,(a0)+
	move.l d2,d0
3:
	movm.l (sp)+,#0x003c
	rts

	.even
.globl _bn_sqr_words
_bn_sqr_words:
	move.l d2,-(sp)
	move.l 8(sp),a0
	move.l 12(sp),a1
	move.l 16(sp),d2
	jble 3f

	moveq.l #-4,d1
	and.l d2,d1
	jbeq 2f
1:
	move.l (a1)+,d0
	mulu.l d0,d1:d0
	move.l d0,(a0)+
	move.l d1,(a0)+

	move.l (a1)+,d0
	mulu.l d0,d1:d0
	move.l d0,(a0)+
	move.l d1,(a0)+

	move.l (a1)+,d0
	mulu.l d0,d1:d0
	move.l d0,(a0)+
	move.l d1,(a0)+

	move.l (a1)+,d0
	mulu.l d0,d1:d0
	move.l d0,(a0)+
	move.l d1,(a0)+

	moveq.l #-4,d1
	add.l d1,d2
	and.l d2,d1
	jbne 1b
2:
	tst.l d2
	jbeq 3f

	move.l (a1)+,d0
	mulu.l d0,d1:d0
	move.l d0,(a0)+
	move.l d1,(a0)+

	subq.l #1,d2
	jbeq 3f

	move.l (a1)+,d0
	mulu.l d0,d1:d0
	move.l d0,(a0)+
	move.l d1,(a0)+

	subq.l #1,d2
	jbeq 3f

	move.l (a1)+,d0
	mulu.l d0,d1:d0
	move.l d0,(a0)+
	move.l d1,(a0)+
3:
	move.l (sp)+,d2
	rts

	.even
.globl _bn_mul_comba8
_bn_mul_comba8:
	movm.l #0x3c20,-(sp)
	movm.l 24(sp),#0x0700
	clr.l d2
	move.l d2,d3
	move.l d2,d4
	move.l d2,d5
	move.l (a1),d0
	move.l (a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l d2,(a0)
	move.l d5,d2
	move.l (a1),d0
	move.l 4(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 4(a1),d0
	move.l (a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l d3,4(a0)
	move.l d5,d3
	move.l 8(a1),d0
	move.l (a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 4(a1),d0
	move.l 4(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l (a1),d0
	move.l 8(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l d4,8(a0)
	move.l d5,d4
	move.l (a1),d0
	move.l 12(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 4(a1),d0
	move.l 8(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 8(a1),d0
	move.l 4(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 12(a1),d0
	move.l (a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l d2,12(a0)
	move.l d5,d2
	move.l 16(a1),d0
	move.l (a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 12(a1),d0
	move.l 4(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 8(a1),d0
	move.l 8(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 4(a1),d0
	move.l 12(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l (a1),d0
	move.l 16(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l d3,16(a0)
	move.l d5,d3
	move.l (a1),d0
	move.l 20(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 4(a1),d0
	move.l 16(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 8(a1),d0
	move.l 12(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 12(a1),d0
	move.l 8(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 16(a1),d0
	move.l 4(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 20(a1),d0
	move.l (a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l d4,20(a0)
	move.l d5,d4
	move.l 24(a1),d0
	move.l (a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 20(a1),d0
	move.l 4(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 16(a1),d0
	move.l 8(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 12(a1),d0
	move.l 12(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 8(a1),d0
	move.l 16(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 4(a1),d0
	move.l 20(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l (a1),d0
	move.l 24(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l d2,24(a0)
	move.l d5,d2
	move.l (a1),d0
	move.l 28(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 4(a1),d0
	move.l 24(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 8(a1),d0
	move.l 20(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 12(a1),d0
	move.l 16(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 16(a1),d0
	move.l 12(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 20(a1),d0
	move.l 8(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 24(a1),d0
	move.l 4(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 28(a1),d0
	move.l (a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l d3,28(a0)
	move.l d5,d3
	move.l 28(a1),d0
	move.l 4(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 24(a1),d0
	move.l 8(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 20(a1),d0
	move.l 12(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 16(a1),d0
	move.l 16(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 12(a1),d0
	move.l 20(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 8(a1),d0
	move.l 24(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 4(a1),d0
	move.l 28(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l d4,32(a0)
	move.l d5,d4
	move.l 8(a1),d0
	move.l 28(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 12(a1),d0
	move.l 24(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 16(a1),d0
	move.l 20(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 20(a1),d0
	move.l 16(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 24(a1),d0
	move.l 12(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 28(a1),d0
	move.l 8(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l d2,36(a0)
	move.l d5,d2
	move.l 28(a1),d0
	move.l 12(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 24(a1),d0
	move.l 16(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 20(a1),d0
	move.l 20(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 16(a1),d0
	move.l 24(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 12(a1),d0
	move.l 28(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l d3,40(a0)
	move.l d5,d3
	move.l 16(a1),d0
	move.l 28(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 20(a1),d0
	move.l 24(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 24(a1),d0
	move.l 20(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l 28(a1),d0
	move.l 16(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l d4,44(a0)
	move.l d5,d4
	move.l 28(a1),d0
	move.l 20(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 24(a1),d0
	move.l 24(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l 20(a1),d0
	move.l 28(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d2
 	addx.l d1,d3
 	addx.l d5,d4

	move.l d2,48(a0)
	move.l d5,d2
	move.l 24(a1),d0
	move.l 28(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l 28(a1),d0
	move.l 24(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d3
 	addx.l d1,d4
 	addx.l d5,d2

	move.l d3,52(a0)
	move.l d5,d3
	move.l 28(a1),d0
	move.l 28(a2),d1

	mulu.l d1,d1:d0
 	add.l d0,d4
 	addx.l d1,d2
 	addx.l d5,d3

	move.l d4,56(a0)
	move.l d2,60(a0)

	movm.l (sp)+,#0x043c
	rts

	.even
.globl _bn_sqr_comba8
_bn_sqr_comba8:
	movm.l #0x3e00,-(sp)
	move.l 24(sp),a1
	move.l 28(sp),a0
	clr.l d5
	move.l (a0),d1
	move.l d5,d3
	move.l d5,d4
	move.l d5,d6

	mulu.l d1,d0:d1
	add.l d1,d5
	addx.l d0,d3
	addx.l d6,d4

	move.l d5,(a1)
	move.l d6,d5
	move.l 4(a0),d2
	move.l (a0),d1

	mulu.l d2,d2:d1
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5

	move.l d3,4(a1)
	move.l d6,d3
	move.l 4(a0),d1

	mulu.l d1,d0:d1
	add.l d1,d4
	addx.l d0,d5
	addx.l d6,d3

	move.l 8(a0),d2
	move.l (a0),d1

	mulu.l d2,d2:d1
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3

	move.l d4,8(a1)
	move.l d6,d4
	move.l 12(a0),d2
	move.l (a0),d1

	mulu.l d2,d2:d1
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4

	move.l 8(a0),d2
	move.l 4(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4

	move.l d5,12(a1)
	move.l d6,d5
	move.l 8(a0),d1

	mulu.l d1,d0:d1
	add.l d1,d3
	addx.l d0,d4
	addx.l d6,d5

	move.l 12(a0),d2
	move.l 4(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5

	move.l 16(a0),d2
	move.l (a0),d1

	mulu.l d2,d2:d1
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5

	move.l d3,16(a1)
	move.l d6,d3
	move.l 20(a0),d2
	move.l (a0),d1

	mulu.l d2,d2:d1
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3

	move.l 16(a0),d2
	move.l 4(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3

	move.l 12(a0),d2
	move.l 8(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3

	move.l d4,20(a1)
	move.l d6,d4
	move.l 12(a0),d1

	mulu.l d1,d0:d1
	add.l d1,d5
	addx.l d0,d3
	addx.l d6,d4

	move.l 16(a0),d2
	move.l 8(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4

	move.l 20(a0),d2
	move.l 4(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4

	move.l 24(a0),d2
	move.l (a0),d1

	mulu.l d2,d2:d1
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4

	move.l d5,24(a1)
	move.l d6,d5
	move.l 28(a0),d2
	move.l (a0),d1

	mulu.l d2,d2:d1
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5

	move.l 24(a0),d2
	move.l 4(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5

	move.l 20(a0),d2
	move.l 8(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5

	move.l 16(a0),d2
	move.l 12(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5

	move.l d3,28(a1)
	move.l d6,d3
	move.l 16(a0),d1

	mulu.l d1,d0:d1
	add.l d1,d4
	addx.l d0,d5
	addx.l d6,d3

	move.l 20(a0),d2
	move.l 12(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3

	move.l 24(a0),d2
	move.l 8(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3

	move.l 28(a0),d2
	move.l 4(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3

	move.l d4,32(a1)
	move.l d6,d4
	move.l 28(a0),d2
	move.l 8(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4

	move.l 24(a0),d2
	move.l 12(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4

	move.l 20(a0),d2
	move.l 16(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4

	move.l d5,36(a1)
	move.l d6,d5
	move.l 20(a0),d1

	mulu.l d1,d0:d1
	add.l d1,d3
	addx.l d0,d4
	addx.l d6,d5

	move.l 24(a0),d2
	move.l 16(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5

	move.l 28(a0),d2
	move.l 12(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5

	move.l d3,40(a1)
	move.l d6,d3
	move.l 28(a0),d2
	move.l 16(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3

	move.l 24(a0),d2
	move.l 20(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3
	add.l d1,d4
	addx.l d2,d5
	addx.l d6,d3

	move.l d4,44(a1)
	move.l d6,d4
	move.l 24(a0),d1

	mulu.l d1,d0:d1
	add.l d1,d5
	addx.l d0,d3
	addx.l d6,d4

	move.l 28(a0),d2
	move.l 20(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4
	add.l d1,d5
	addx.l d2,d3
	addx.l d6,d4

	move.l d5,48(a1)
	move.l d6,d5
	move.l 28(a0),d2
	move.l 24(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5
	add.l d1,d3
	addx.l d2,d4
	addx.l d6,d5

	move.l d3,52(a1)
	move.l d6,d3
	move.l 28(a0),d1

	mulu.l d1,d0:d1
	add.l d1,d4
	addx.l d0,d5
	addx.l d6,d3

	move.l d4,56(a1)
	move.l d5,60(a1)
	movm.l (sp)+,#0x7c
	rts

	.even
.globl _bn_sqr_comba4
_bn_sqr_comba4:
	movm.l #0x3e00,-(sp)
	move.l 24(sp),a1
	move.l 28(sp),a0
	clr.l d5
	move.l (a0),d1
	move.l d5,d4
	move.l d5,d3
	move.l d5,d6

	mulu.l d1,d0:d1
	add.l d1,d5
	addx.l d0,d4
	addx.l d6,d3

	move.l d5,(a1)
	move.l d6,d5
	move.l 4(a0),d2
	move.l (a0),d1

	mulu.l d2,d2:d1
	add.l d1,d4
	addx.l d2,d3
	addx.l d6,d5
	add.l d1,d4
	addx.l d2,d3
	addx.l d6,d5

	move.l d4,4(a1)
	move.l d6,d4
	move.l 4(a0),d1

	mulu.l d1,d0:d1
	add.l d1,d3
	addx.l d0,d5
	addx.l d6,d4

	move.l 8(a0),d2
	move.l (a0),d1

	mulu.l d2,d2:d1
	add.l d1,d3
	addx.l d2,d5
	addx.l d6,d4
	add.l d1,d3
	addx.l d2,d5
	addx.l d6,d4

	move.l d3,8(a1)
	move.l d6,d3
	move.l 12(a0),d2
	move.l (a0),d1

	mulu.l d2,d2:d1
	add.l d1,d5
	addx.l d2,d4
	addx.l d6,d3
	add.l d1,d5
	addx.l d2,d4
	addx.l d6,d3

	move.l 8(a0),d2
	move.l 4(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d5
	addx.l d2,d4
	addx.l d6,d3
	add.l d1,d5
	addx.l d2,d4
	addx.l d6,d3

	move.l d5,12(a1)
	move.l d6,d5
	move.l 8(a0),d1

	mulu.l d1,d0:d1
	add.l d1,d4
	addx.l d0,d3
	addx.l d6,d5

	move.l 12(a0),d2
	move.l 4(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d4
	addx.l d2,d3
	addx.l d6,d5
	add.l d1,d4
	addx.l d2,d3
	addx.l d6,d5

	move.l d4,16(a1)
	move.l d6,d4
	move.l 12(a0),d2
	move.l 8(a0),d1

	mulu.l d2,d2:d1
	add.l d1,d3
	addx.l d2,d5
	addx.l d6,d4
	add.l d1,d3
	addx.l d2,d5
	addx.l d6,d4

	move.l d3,20(a1)
	move.l d6,d3
	move.l 12(a0),d1

	mulu.l d1,d0:d1
	add.l d1,d5
	addx.l d0,d4
	addx.l d6,d3

	move.l d5,24(a1)
	move.l d4,28(a1)
	movm.l (sp)+,#0x7c
	rts

	.even
.globl _bn_mul_comba4
_bn_mul_comba4:
	movm.l #0x3c20,-(sp)
	move.l 24(sp),a2
	move.l 28(sp),a0
	move.l 32(sp),a1
	clr.l d4
	move.l (a0),d1
	move.l (a1),d0
	move.l d4,d3
	move.l d4,d2
	move.l d4,d5

	mulu.l d1,d0:d1
	add.l d1,d4
	addx.l d0,d3
	addx.l d5,d2

	move.l d4,(a2)
	move.l d5,d4
	move.l (a0),d1
	move.l 4(a1),d0

	mulu.l d1,d0:d1
	add.l d1,d3
	addx.l d0,d2
	addx.l d5,d4

	move.l 4(a0),d1
	move.l (a1),d0

	mulu.l d1,d0:d1
	add.l d1,d3
	addx.l d0,d2
	addx.l d5,d4

	move.l d3,4(a2)
	move.l d5,d3
	move.l 8(a0),d1
	move.l (a1),d0

	mulu.l d1,d0:d1
	add.l d1,d2
	addx.l d0,d4
	addx.l d5,d3

	move.l 4(a0),d1
	move.l 4(a1),d0

	mulu.l d1,d0:d1
	add.l d1,d2
	addx.l d0,d4
	addx.l d5,d3

	move.l (a0),d1
	move.l 8(a1),d0

	mulu.l d1,d0:d1
	add.l d1,d2
	addx.l d0,d4
	addx.l d5,d3

	move.l d2,8(a2)
	move.l d5,d2
	move.l (a0),d1
	move.l 12(a1),d0

	mulu.l d1,d0:d1
	add.l d1,d4
	addx.l d0,d3
	addx.l d5,d2

	move.l 4(a0),d1
	move.l 8(a1),d0

	mulu.l d1,d0:d1
	add.l d1,d4
	addx.l d0,d3
	addx.l d5,d2

	move.l 8(a0),d1
	move.l 4(a1),d0

	mulu.l d1,d0:d1
	add.l d1,d4
	addx.l d0,d3
	addx.l d5,d2

	move.l 12(a0),d1
	move.l (a1),d0

	mulu.l d1,d0:d1
	add.l d1,d4
	addx.l d0,d3
	addx.l d5,d2

	move.l d4,12(a2)
	move.l d5,d4
	move.l 12(a0),d1
	move.l 4(a1),d0

	mulu.l d1,d0:d1
	add.l d1,d3
	addx.l d0,d2
	addx.l d5,d4

	move.l 8(a0),d1
	move.l 8(a1),d0

	mulu.l d1,d0:d1
	add.l d1,d3
	addx.l d0,d2
	addx.l d5,d4

	move.l 4(a0),d1
	move.l 12(a1),d0

	mulu.l d1,d0:d1
	add.l d1,d3
	addx.l d0,d2
	addx.l d5,d4

	move.l d3,16(a2)
	move.l d5,d3
	move.l 8(a0),d1
	move.l 12(a1),d0

	mulu.l d1,d0:d1
	add.l d1,d2
	addx.l d0,d4
	addx.l d5,d3

	move.l 12(a0),d1
	move.l 8(a1),d0

	mulu.l d1,d0:d1
	add.l d1,d2
	addx.l d0,d4
	addx.l d5,d3

	move.l d2,20(a2)
	move.l d5,d2
	move.l 12(a0),d1
	move.l 12(a1),d0

	mulu.l d1,d0:d1
	add.l d1,d4
	addx.l d0,d3
	addx.l d5,d2

	move.l d4,24(a2)
	move.l d3,28(a2)
	movm.l (sp)+,#0x43c
	rts

/* bn_div_words should really just be inlined wherever it's used */

	.even
.globl _bn_div_words
_bn_div_words:
	move.l 4(sp),d1
	move.l 8(sp),d0
	divu.l 12(sp),d1:d0
	rts

	.even
.globl _bn_add_words
_bn_add_words:
	movm.l #0x2030,-(sp)
	movm.l 16(sp),#0x0f00
	clr.l d0
	tst.l a3
	jble 3f

/* d0 is 0, use this shift to clear the eXtend bit */
	lsl.l #1,d0
1:
	move.l (a1)+,d1
	move.l (a2)+,d2
	addx.l d1,d2
	move.l d2,(a0)+
	subq.l #1,a3
	tst.l a3
	jble 2f

	move.l (a1)+,d1
	move.l (a2)+,d2
	addx.l d1,d2
	move.l d2,(a0)+
	subq.l #1,a3
	tst.l a3
	jble 2f

	move.l (a1)+,d1
	move.l (a2)+,d2
	addx.l d1,d2
	move.l d2,(a0)+
	subq.l #1,a3
	tst.l a3
	jble 2f

	move.l (a1)+,d1
	move.l (a2)+,d2
	addx.l d1,d2
	move.l d2,(a0)+
	subq.l #1,a3
	tst.l a3
	jgt 1b
2:
	addx.l d0,d0
3:
	movm.l (sp)+,#0x0c04
	rts

	.even
.globl _bn_sub_words
_bn_sub_words:
	movm.l #0x2030,-(sp)
	movm.l 16(sp),#0x0f00
	clr.l d0
	tst.l a3
	jble 3f

	lsl.l #1,d0
1:
	move.l (a1)+,d2
	move.l (a2)+,d1
	subx.l d1,d2
	move.l d2,(a0)+
	subq.l #1,a3
	tst.l a3
	jble 2f

	move.l (a1)+,d2
	move.l (a2)+,d1
	subx.l d1,d2
	move.l d2,(a0)+
	subq.l #1,a3
	tst.l a3
	jble 2f

	move.l (a1)+,d2
	move.l (a2)+,d1
	subx.l d1,d2
	move.l d2,(a0)+
	subq.l #1,a3
	tst.l a3
	jble 2f

	move.l (a1)+,d2
	move.l (a2)+,d1
	subx.l d1,d2
	move.l d2,(a0)+
	subq.l #1,a3
	tst.l a3
	jgt 1b
2:
	addx.l d0,d0
3:
	movm.l (sp)+,#0x0c04
	rts
