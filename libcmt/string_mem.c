/*
 * Portable ISO 'C' (1994) runtime library for the Amiga computer
 * Copyright (c) 2002-2005 by Olaf Barthel <olsen@sourcery.han.de>
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

#include <string.h>

/* Address is neither aligned to a word or long word boundary. */
#define IS_UNALIGNED(a) ((((unsigned long)(a)) & 1) != 0)

#define IS_SHORT_ALIGNED(a) ((((unsigned long)(a)) & 3) == 2)

/* Address is aligned to a long word boundary. For an 68030 and beyond the
   alignment does not matter. */
#if defined(M68020)
#define IS_LONG_ALIGNED(a) (1)
#else
#define IS_LONG_ALIGNED(a) ((((unsigned long)(a)) & 3) == 0)
#endif /* M68020 */

/* Check if one of the four bytes which make up a long word is zero. */
#define LONG_CONTAINS_ZERO_OCTET(x) (((x) + 0xfefefeff) & ~((x) | 0x7f7f7f7f))

/****************************************************************************/

static __inline void *
__memchr(const unsigned char * m,unsigned char val,size_t len)
{
	void * result = NULL;

	/* The setup below is intended to speed up searching in larger
	 * memory blocks. This can be very elaborate and should not be
	 * done unless a payoff can be expected.
	 */
	if(len > 4 * sizeof(long))
	{
		/* Try to align the memory block to an even address. */
		if(IS_UNALIGNED(m))
		{
			len--;

			if((*m) == val)
			{
				result = (void *)m;
				goto out;
			}

			m++;
		}

		/* Try to align the memory block to an address which is
		 * a multiple of a long word.
		 */
		if(len >= sizeof(short) && IS_SHORT_ALIGNED(m))
		{
			len--;

			if((*m) == val)
			{
				result = (void *)m;
				goto out;
			}

			m++;

			len--;

			if((*m) == val)
			{
				result = (void *)m;
				goto out;
			}

			m++;
		}

		/* If the memory block is aligned to an address from which
		 * data can be read one long word at a time, perform the
		 * search in this manner.
		 */
		if(len >= sizeof(long) && IS_LONG_ALIGNED(m))
		{
			const unsigned long * _m = (const unsigned long *)m;
			unsigned long _val = val;
			unsigned long x;

			/* Build a long word which contains the byte value to
			 * find, repeated four times.
			 */
			_val |= (_val <<  8);
			_val |= (_val << 16);

			do
			{
				/* Technically, what we want to achieve is to look
				 * at a single long word and be able to tell whether
				 * it contains the value we are looking for in one
				 * of the octets which it consists of. This is
				 * achieved by an XOR operation which sets those
				 * octets to zero which match the search value. The
				 * result of this operation is then tested to see
				 * whether it contains any zero octets.
				 */
				x = (*_m) ^ _val;
				if(LONG_CONTAINS_ZERO_OCTET(x))
				{
					/* We got what we wanted. Now figure out which byte
					 * would match the value we were looking for.
					 */
					m = (const unsigned char *)_m;
					goto out;
				}

				_m++;
				len -= sizeof(long);
			}
			while(len >= sizeof(long));

			m = (const unsigned char *)_m;
		}
	}

 out:

	/* If there are bytes left in need of comparison, take
	 * care of them here. This also includes 'aborted'
	 * comparison attempts from above.
	 */
	while(len-- > 0)
	{
		if((*m) == val)
		{
			result = (void *)m;
			break;
		}

		m++;
	}

	return(result);
}

/****************************************************************************/

void *
memchr(const void * ptr, int val, size_t len)
{
	const unsigned char * m = ptr;
	void * result = NULL;

	if(len > 0)
		result = __memchr(m,(unsigned char)(val & 255),len);

	return(result);
}

static __inline int
__memcmp(const char *m1,const char *m2,size_t len)
{
	int result = 0;

	/* The setup below is intended to speed up searching in larger
	 * memory blocks. This can be very elaborate and should not be
	 * done unless a payoff can be expected.
	 */
	if(len > 4 * sizeof(long))
	{
		/* Try to align both memory blocks to even addresses. */
		if(IS_UNALIGNED(m1) && IS_UNALIGNED(m2))
		{
			len--;

			if((*m1) != (*m2))
			{
				result = (*m1) - (*m2);
				goto out;
			}

			m1++;
			m2++;
		}

		/* Try to align both memory blocks to addresses which are a
		 * long word multiple.
		 */
		if(len >= sizeof(short) && IS_SHORT_ALIGNED(m1) && IS_SHORT_ALIGNED(m2))
		{
			const short * _m1 = (const short *)m1;
			const short * _m2 = (const short *)m2;

			/* Check if the two words are different, and if they are,
			 * figure out down below which of the bytes were different.
			 */
			if((*_m1++) != (*_m2++))
				goto out;

			m1 = (const char *)_m1;
			m2 = (const char *)_m2;

			len -= sizeof(short);
		}

		/* If both memory blocks are aligned to addresses which can be
		 * read directly one long word at a time, perform the comparison
		 * in that manner.
		 */
		if(len >= sizeof(long) && IS_LONG_ALIGNED(m1) && IS_LONG_ALIGNED(m2))
		{
			const long * _m1 = (const long *)m1;
			const long * _m2 = (const long *)m2;

			do
			{
				/* If the two long words are different, figure out down
				 * below which of the bytes were different.
				 */
				if((*_m1) != (*_m2))
				{
					m1 = (const char *)_m1;
					m2 = (const char *)_m2;

					goto out;
				}

				_m1++;
				_m2++;

				len -= sizeof(long);
			}
			while(len >= sizeof(long));

			m1 = (const char *)_m1;
			m2 = (const char *)_m2;
		}
	}

 out:

	/* If there are bytes left in need of comparison, take
	 * care of them here. This also includes 'aborted'
	 * comparison attempts from above.
	 */
	while(len-- > 0)
	{
		if((*m1) != (*m2))
		{
			result = (*m1) - (*m2);
			break;
		}

		m1++;
		m2++;
	}

	return(result);
}

/****************************************************************************/

int
memcmp(const void *ptr1, const void *ptr2, size_t len)
{
	int result = 0;

	if(ptr1 != ptr2 && len > 0)
		result = __memcmp(ptr1,ptr2,len);

	return(result);
}

static __inline void
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

			to		= (char *)_to;
			from	= (char *)_from;
		}
	}

	/* If there's anything left, copy the rest. */
	while(len-- > 0)
		(*to++) = (*from++);
}

void *
memcpy(void *dst, const void *src, size_t len)
{
	if(len > 0 && dst != src)
		__memcpy((unsigned char *)dst,(unsigned char *)src,len);

	return(dst);
}

static __inline void
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

				to		= (char *)_to;
				from	= (char *)_from;
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

				to		= (char *)_to;
				from	= (char *)_from;
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
	if(len > 0 && dest != src)
		__memmove((unsigned char *)dest,(unsigned char *)src,len);

	return(dest);
}

static __inline void
__memset(unsigned char * to,unsigned char value,size_t len)
{
	/* The setup below is intended to speed up changing larger
	 * memory blocks. This can be very elaborate and should not be
	 * done unless a payoff can be expected.
	 */
	if(len > 4 * sizeof(long))
	{
		if(IS_UNALIGNED(to))
		{
			(*to++) = value;
			len--;
		}

		if(len >= sizeof(short) && IS_SHORT_ALIGNED(to))
		{
			(*to++) = value;
			(*to++) = value;

			len -= sizeof(short);
		}

		if(len >= sizeof(long) && IS_LONG_ALIGNED(to))
		{
			unsigned long *	_to		= (unsigned long *)to;
			unsigned long	_value	= value;

			_value |= (_value <<  8);
			_value |= (_value << 16);

			while(len >= 8 * sizeof(long))
			{
				/* The following should translate into load/store
				   opcodes which encode the access offsets (0..7)
				   into the respective displacement values. This
				   should help the PowerPC by avoiding pipeline
				   stalls (removing the postincrement on the address
				   will do that) but has no noticeable impact on the
				   68k platform (I checked). */

				_to[0] = _value;
				_to[1] = _value;
				_to[2] = _value;
				_to[3] = _value;
				_to[4] = _value;
				_to[5] = _value;
				_to[6] = _value;
				_to[7] = _value;

				_to += 8;

				/*
				(*_to++) = _value;
				(*_to++) = _value;
				(*_to++) = _value;
				(*_to++) = _value;
				(*_to++) = _value;
				(*_to++) = _value;
				(*_to++) = _value;
				(*_to++) = _value;
				*/

				len -= 8 * sizeof(long);
			}

			while(len >= sizeof(long))
			{
				(*_to++) = _value;

				len -= sizeof(long);
			}		

			to = (char *)_to;
		}
	}

	while(len-- > 0)
		(*to++) = value;
}

void *
memset(void *ptr, int val, size_t len)
{
	__memset(ptr,(unsigned char)(val & 255),len);

	return(ptr);
}
