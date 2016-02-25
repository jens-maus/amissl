/*
 * $Id: string_memmove.c,v 1.7 2006-09-22 09:02:51 obarthel Exp $
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

	.globl	___ovbcopy

___ovbcopy:

	moveml	sp@(4),a0-a1
	movel	sp@(12),d0

	movel	a2,sp@-
	cmpal	a0,a1
	bcs		forwards

| If A0 is less than A1 then we _may_ have to do the memory move
| backwards. However, since doing the memory move backwards is less
| efficient if we have to do any byte moves, I'll first check to see
| whether there is actually any overlap.

	lea		a0@(0,d0:l),a2
	cmpal	a2,a1			| If A2 is greater than A1 then there is overlap,
	bcs		backwards		| and we'd better do the move backwards.

forwards:

	movew	a0,d1			| Make sure that A0 is long word aligned.
	notw	d1				| This may de-align A1, but that's life.
	andiw	#3,d1

align_loop1:

	moveb	a0@+,a1@+		| Move from one to four bytes to long
	subql	#1,d0			| word align A0.
	dbeq	d1,align_loop1
	beq		done

	movew	d0,d1
	andiw	#511,d1
	movew	d1,sp@-
	moveq	#9,d1
	lsrl	d1,d0
	beq		no_big_chunks_to_move1

	moveml	d2-d7/a3-a6,sp@-
	swap	d0
	movew	d0,sp@-
	swap	d0

	bras	move_big_chunk_end1

move_big_chunk1:

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

move_big_chunk_end1:

	dbf		d0,move_big_chunk1

	subqw	#1,sp@
	bge		move_big_chunk1

	addqw	#2,sp

	moveml	sp@+,d2-d7/a3-a6

no_big_chunks_to_move1:

	movew	sp@+,d0

	movew	d0,d1
	lsrw	#5,d1			| D1 now holds numbytes / 32 and
	andiw	#31,d0			| D0 holds numbytes % 32.

	bras	move_eight_longs_end1

move_eight_longs1:

	movel	a0@+,a1@+
	movel	a0@+,a1@+
	movel	a0@+,a1@+
	movel	a0@+,a1@+
	movel	a0@+,a1@+
	movel	a0@+,a1@+
	movel	a0@+,a1@+
	movel	a0@+,a1@+

move_eight_longs_end1:

	dbf		d1,move_eight_longs1

	movew	d0,d1
	lsrw	#2,d1			| D1 now holds numbytes / 4

	bras	move_long_end1

move_long1:

	movel	a0@+,a1@+

move_long_end1:

	dbf		d1,move_long1

	andiw	#3,d0			| D0 now holds numbytes % 4.

	bra		move_byte_end1

move_byte1:

	moveb	a0@+,a1@+

move_byte_end1:

	dbf		d0,move_byte1

done:

	movel	sp@+,a2
	rts

backwards:

	addal	d0,a0
	addal	d0,a1

	movew	a0,d1			| Make sure that A0 is long word aligned.
	subqw	#1,d1			| This may de-align A1, but that's life.
	andiw	#3,d1

align_loop2:

	moveb	a0@-,a1@-
	subql	#1,d0
	dbeq	d1,align_loop2
	beq		done

	movew	d0,d1
	andiw	#511,d1
	movew	d1,sp@-
	moveq	#9,d1
	lsrl	d1,d0
	beq		no_big_chunks_to_move2

	moveml	d2-d7/a3-a6,sp@-
	swap	d0
	movew	d0,sp@-
	swap	d0

	subaw	#48,a0
	bras	move_big_chunk_end2

move_big_chunk2:

	moveml	a0@,d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@-
	moveml	a0@(-48),d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@-
	moveml	a0@(-96),d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@-
	moveml	a0@(-144),d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@-
	moveml	a0@(-192),d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@-
	moveml	a0@(-240),d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@-
	moveml	a0@(-288),d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@-
	moveml	a0@(-336),d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@-
	moveml	a0@(-384),d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@-
	moveml	a0@(-432),d1-d7/a2-a6
	moveml	d1-d7/a2-a6,a1@-
	moveml	a0@(-464),d1-d7/a2
	moveml	d1-d7/a2,a1@-
	subaw	#512,a0

move_big_chunk_end2:

	dbf		d0,move_big_chunk2

	subqw	#1,sp@
	bge		move_big_chunk2

	addaw	#48,a0

	addqw	#2,sp

	moveml	sp@+,d2-d7/a3-a6

no_big_chunks_to_move2:

	movew	sp@+,d0

	movew	d0,d1
	lsrw	#5,d1			| D1 now holds numbytes / 32 and
	andiw	#31,d0			| D0 holds numbytes % 32.

	bras	move_eight_longs_end2

move_eight_longs2:

	movel	a0@-,a1@-
	movel	a0@-,a1@-
	movel	a0@-,a1@-
	movel	a0@-,a1@-
	movel	a0@-,a1@-
	movel	a0@-,a1@-
	movel	a0@-,a1@-
	movel	a0@-,a1@-

move_eight_longs_end2:

	dbf		d1,move_eight_longs2

	movew	d0,d1
	lsrw	#2,d1			| D1 now holds numbytes / 4

	bra		move_long_end2

move_long2:

	movel	a0@-,a1@-

move_long_end2:

	dbf		d1,move_long2

	andiw	#3,d0			| D0 now holds numbytes % 4.
	bra		move_byte_end2

move_byte2:

	moveb	a0@-,a1@-

move_byte_end2:

	dbf		d0,move_byte2

	movel	sp@+,a2
	rts

");

/****************************************************************************/

extern void __ovbcopy(const void * src,void * dest,size_t len);

/****************************************************************************/

void *
memmove(void *dest, const void * src, size_t len)
{
	void * result = dest;

	assert( (len == 0) || (dest != NULL && src != NULL && (int)len > 0) );

	#if defined(CHECK_FOR_NULL_POINTERS)
	{
		if(dest == NULL || src == NULL)
		{
			__set_errno(EFAULT);
			goto out;
		}
	}
	#endif /* CHECK_FOR_NULL_POINTERS */

	if(len > 0 && dest != src)
		__ovbcopy(src,dest,len);

 out:

	return(result);
}

/****************************************************************************/

#else

/****************************************************************************/

INLINE STATIC VOID
__memmove(unsigned char * to,unsigned char * from,size_t len)
{
	if(from < to && to < from + len)
	{
		to		+= len;
		from	+= len;

		/* The setup below is intended to speed up copying larger
		 * memory blocks. This can be very elaborate and should not be
		 * done unless a payoff can be expected.
		 */
		if(len > 4 * sizeof(long))
		{
			size_t distance;

			/* Try to align both source and destination to an even address. */
			if(IS_UNALIGNED(to) && IS_UNALIGNED(from))
			{
				(*--to) = (*--from);
				len--;
			}

			/* Try to align both source and destination to addresses which are
			 * multiples of four.
			 */
			if(len >= sizeof(short) && IS_SHORT_ALIGNED(to) && IS_SHORT_ALIGNED(from))
			{
				(*--to) = (*--from);
				(*--to) = (*--from);

				len -= sizeof(short);
			}

			/* Check the distance between source and destination. If it's shorter
			 * than a long word, don't dive into the copying routine below since
			 * the overlapping copying may clobber data.
			 */
			distance = (size_t)(to - from);

			/* If both source and destination are aligned to addresses which are
			 * multiples of four and there is still enough data left to be copied,
			 * try to move it in larger chunks.
			 */
			if(distance >= sizeof(long) && len >= sizeof(long) && IS_LONG_ALIGNED(to) && IS_LONG_ALIGNED(from))
			{
				unsigned long * _to		= (unsigned long *)to;
				unsigned long * _from	= (unsigned long *)from;

				/* An unrolled transfer loop, which shifts 32 bytes per iteration. */
				while(len >= 8 * sizeof(long))
				{
					/* The following should translate into load/store
					   opcodes which encode the access offsets (-1..-8)
					   into the respective displacement values. This
					   should help the PowerPC by avoiding pipeline
					   stalls (removing the predecrement on the address
					   will do that) but has no noticeable impact on the
					   68k platform (I checked). */

					_to[-1] = _from[-1];
					_to[-2] = _from[-2];
					_to[-3] = _from[-3];
					_to[-4] = _from[-4];
					_to[-5] = _from[-5];
					_to[-6] = _from[-6];
					_to[-7] = _from[-7];
					_to[-8] = _from[-8];

					_to		-= 8;
					_from	-= 8;

					/*
					(*--_to) = (*--_from);
					(*--_to) = (*--_from);
					(*--_to) = (*--_from);
					(*--_to) = (*--_from);
					(*--_to) = (*--_from);
					(*--_to) = (*--_from);
					(*--_to) = (*--_from);
					(*--_to) = (*--_from);
					*/

					len -= 8 * sizeof(long);
				}

				/* Try to mop up any small amounts of data still in need of
				 * copying...
				 */
				while(len >= sizeof(long))
				{
					(*--_to) = (*--_from);

					len -= sizeof(long);
				}		

				to		= (unsigned char *)_to;
				from	= (unsigned char *)_from;
			}
		}

		/* If there's anything left, copy the rest. */
		while(len-- > 0)
			(*--to) = (*--from);
	}
	else
	{
		/* The setup below is intended to speed up copying larger
		 * memory blocks. This can be very elaborate and should not be
		 * done unless a payoff can be expected.
		 */
		if(len > 4 * sizeof(long))
		{
			size_t distance;

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

			/* Check the distance between source and destination. If it's shorter
			 * than a long word, don't dive into the copying routine below since
			 * the overlapping copying may clobber data.
			 */
			if(to >= from)
				distance = (size_t)(to - from);
			else
				distance = (size_t)(from - to);

			/* If both source and destination are aligned to addresses which are
			 * multiples of four and there is still enough data left to be copied,
			 * try to move it in larger chunks.
			 */
			if(distance >= sizeof(long) && len >= sizeof(long) && IS_LONG_ALIGNED(to) && IS_LONG_ALIGNED(from))
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
}

/****************************************************************************/

void *
memmove(void *dest, const void * src, size_t len)
{
	void * result = dest;

	assert( (len == 0) || (dest != NULL && src != NULL && (int)len > 0) );

	#if defined(CHECK_FOR_NULL_POINTERS)
	{
		if(dest == NULL || src == NULL)
		{
			__set_errno(EFAULT);
			goto out;
		}
	}
	#endif /* CHECK_FOR_NULL_POINTERS */

	if(len > 0 && dest != src)
	{
		char * to = dest;
		const char * from = src;

		#if 1
		{
			if(from < to && to < from + len)
			{
				to		+= len;
				from	+= len;

				while(len-- > 0)
					(*--to) = (*--from);
			}
			else
			{
				while(len-- > 0)
					(*to++) = (*from++);
			}
		}
		#else
		{
			__memmove((unsigned char *)to,(unsigned char *)from,len);
		}
		#endif
	}

 out:

	return(result);
}

/****************************************************************************/

#endif /* __GNUC__ && __mc68020__ */
