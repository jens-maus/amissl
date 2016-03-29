/*
 * $Id: string_memcpy.c,v 1.8 2006-09-22 09:02:51 obarthel Exp $
 *
 * :ts=4
 *
 * Portable ISO 'C' (1994) runtime library for the Amiga computer
 * Copyright (c) 2002-2015 by Olaf Barthel <obarthel (at) gmx.net>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   - Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 *   - Neither the name of Olaf Barthel nor the names of contributors
 *     may be used to endorse or promote products derived from this
 *     software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/****************************************************************************/

#ifndef _STRING_HEADERS_H
#include "string_headers.h"
#endif /* _STRING_HEADERS_H */

/****************************************************************************/

#if (defined(__GNUC__) && defined(__mc68020__) && defined(NDEBUG) && defined(undefined))

/****************************************************************************/

asm("
	.text
	.even

	.globl	___bcopy

___bcopy:

	moveml	sp@(4),a0-a1
	movel	sp@(12),d0

	movew	a0,d1			| Make sure that A0 is long word aligned.
	andiw	#3,d1
	beq		already_aligned

	notw	d1				| This may de-align A1, but that's life.
	andiw	#3,d1

align_loop:

	moveb	a0@+,a1@+		| Move from one to four bytes to long
	subql	#1,d0			| word align A0.
	dbeq	d1,align_loop
	beq		done

already_aligned:

	movew	d0,d1
	andiw	#511,d1
	movew	d1,sp@-
	moveq	#9,d1
	lsrl	d1,d0
	beq		no_big_chunks_to_move

	moveml	d2-d7/a2-a6,sp@-
	swap	d0
	movew	d0,sp@-
	swap	d0
	bra		move_big_chunk_end

move_big_chunk:

	moveml	a0@+,d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@
	moveml	a0@+,d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@(48)
	moveml	a0@+,d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@(96)
	moveml	a0@+,d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@(144)
	moveml	a0@+,d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@(192)
	moveml	a0@+,d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@(240)
	moveml	a0@+,d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@(288)
	moveml	a0@+,d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@(336)
	moveml	a0@+,d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@(384)
	moveml	a0@+,d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@(432)
	moveml	a0@+,d1-d7/a2
	moveml	d1-d7/a2,a1@(480)
	addaw	#512,a1

move_big_chunk_end:

	dbf		d0,move_big_chunk
	subqw	#1,sp@
	bge		move_big_chunk

	addqw	#2,sp

	moveml	sp@+,d2-d7/a2-a6

no_big_chunks_to_move:

	movew	sp@+,d0

	movew	d0,d1
	lsrw	#5,d1			| D1 now holds numbytes / 32 and
	andiw	#31,d0			| D0 holds numbytes % 32.

	bra	move_eight_longs_end

move_eight_longs:

	movel	a0@+,a1@+
	movel	a0@+,a1@+
	movel	a0@+,a1@+
	movel	a0@+,a1@+
	movel	a0@+,a1@+
	movel	a0@+,a1@+
	movel	a0@+,a1@+
	movel	a0@+,a1@+

move_eight_longs_end:

	dbf		d1,move_eight_longs

	movew	d0,d1
	lsrw	#2,d1			| D1 now holds numbytes / 4 and

	bra		move_long_end

move_long:

	movel	a0@+,a1@+

move_long_end:

	dbf		d1,move_long

	andiw	#3,d0			| D0 holds numbytes % 4.
	bra		move_byte_end

move_byte:

	moveb	a0@+,a1@+

move_byte_end:

	dbf		d0,move_byte

done:

	rts

");

/****************************************************************************/

extern void __bcopy(const void *src,void *dst,size_t len);

/****************************************************************************/

/* This is ugly: GCC 2.95.x assumes that 'unsigned long' is used in the built-in
   memcmp/memcpy/memset functions instead of 'size_t'. This can produce warnings
   where none are necessary. */
#if defined(__GNUC__) && (__GNUC__ < 3)
void *
memcpy(void *dst, const void *src, unsigned long len)
#else
void *
memcpy(void *dst, const void *src, size_t len)
#endif /* __GNUC__ && __GNUC__ < 3 */
{
	void * result = dst;

	assert( (len == 0) || (dst != NULL && src != NULL && (int)len > 0) );

	#if defined(CHECK_FOR_NULL_POINTERS)
	{
		if(dst == NULL || src == NULL)
		{
			__set_errno(EFAULT);
			goto out;
		}
	}
	#endif /* CHECK_FOR_NULL_POINTERS */

	if(len > 0 && dst != src)
	{
		/* The two memory regions may not overlap. */
		assert((dst) >= (src)+len ||
		       (src) >= (dst)+len);

		__bcopy(src,dst,len);
	}

 out:

	return(result);
}

/****************************************************************************/

#else

/****************************************************************************/

INLINE STATIC VOID 
__memcpy(unsigned char * to,unsigned char * from,size_t len)
{
	/* The setup below is intended to speed up copying larger
	 * memory blocks. This can be very elaborate and should not be
	 * done unless a payoff can be expected.
	 */
	if(len > 4 * sizeof(long))
	{
		/* Try to align both source and destination to an even address. */
		if(IS_UNALIGNED(to) && IS_UNALIGNED(from))
		{
			(*to++) = (*from++);
			len--;
		}

		/* Try to align both source and destination to addresses which are
		 * multiples of four.
		 */
		if(len >= sizeof(short) && IS_SHORT_ALIGNED(to) && IS_SHORT_ALIGNED(from))
		{
			(*to++) = (*from++);
			(*to++) = (*from++);

			len -= sizeof(short);
		}

		/* If both source and destination are aligned to addresses which are
		 * multiples of four and there is still enough data left to be copied,
		 * try to move it in larger chunks.
		 */
		if(len >= sizeof(long) && IS_LONG_ALIGNED(to) && IS_LONG_ALIGNED(from))
		{
			unsigned long * _to		= (unsigned long *)to;
			unsigned long * _from	= (unsigned long *)from;

			/* An unrolled transfer loop, which shifts 32 bytes per iteration. */
			while(len >= 8 * sizeof(long))
			{
				/* The following should translate into load/store
				   opcodes which encode the access offsets (0..7)
				   into the respective displacement values. This
				   should help the PowerPC by avoiding pipeline
				   stalls (removing the postincrement on the address
				   will do that) but has no noticeable impact on the
				   68k platform (I checked). */

				_to[0] = _from[0];
				_to[1] = _from[1];
				_to[2] = _from[2];
				_to[3] = _from[3];
				_to[4] = _from[4];
				_to[5] = _from[5];
				_to[6] = _from[6];
				_to[7] = _from[7];

				_to		+= 8;
				_from	+= 8;

				/*
				(*_to++) = (*_from++);
				(*_to++) = (*_from++);
				(*_to++) = (*_from++);
				(*_to++) = (*_from++);
				(*_to++) = (*_from++);
				(*_to++) = (*_from++);
				(*_to++) = (*_from++);
				(*_to++) = (*_from++);
				*/

				len -= 8 * sizeof(long);
			}

			/* Try to mop up any small amounts of data still in need of
			 * copying...
			 */
			while(len >= sizeof(long))
			{
				(*_to++) = (*_from++);

				len -= sizeof(long);
			}		

			to		= (unsigned char *)_to;
			from	= (unsigned char *)_from;
		}
	}

	/* If there's anything left, copy the rest. */
	while(len-- > 0)
		(*to++) = (*from++);
}

/****************************************************************************/

/* This is ugly: GCC 2.95.x assumes that 'unsigned long' is used in the built-in
   memcmp/memcpy/memset functions instead of 'size_t'. This can produce warnings
   where none are necessary. */
#if defined(__GNUC__) && (__GNUC__ < 3)
void *
memcpy(void *dst, const void *src, unsigned long len)
#else
void *
memcpy(void *dst, const void *src, size_t len)
#endif /* __GNUC__ && __GNUC__ < 3 */
{
	void * result = dst;

	assert( (len == 0) || (dst != NULL && src != NULL && (int)len > 0) );

	#if defined(CHECK_FOR_NULL_POINTERS)
	{
		if(dst == NULL || src == NULL)
		{
			__set_errno(EFAULT);
			goto out;
		}
	}
	#endif /* CHECK_FOR_NULL_POINTERS */

	if(len > 0 && dst != src)
	{
		char * to = dst;
		const char * from = src;

		/* The two memory regions may not overlap. */
		assert((to)   >= (from)+len ||
		       (from) >= (to  )+len);

		#if 0
		{
			while(len-- > 0)
				(*to++) = (*from++);
		}
		#else
		{
			__memcpy((unsigned char *)to,(unsigned char *)from,len);
		}
		#endif
	}

/* out: */

	return(result);
}

/****************************************************************************/

#endif /* __GNUC__ && __mc68020__ */
