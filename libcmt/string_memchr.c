/*
 * $Id: string_memchr.c,v 1.6 2006-01-08 12:04:26 obarthel Exp $
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

/* Check if one of the four bytes which make up a long word is zero. */
#define LONG_CONTAINS_ZERO_OCTET(x) (((x) + 0xfefefeff) & ~((x) | 0x7f7f7f7f))

/****************************************************************************/

INLINE STATIC void *
__memchr(const unsigned char * m,unsigned char val,size_t len)
{
	void * result = NULL;

	assert( m != NULL && len > 0 );

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

	assert( ptr != NULL );
	assert( (int)len >= 0 );

	#if defined(CHECK_FOR_NULL_POINTERS)
	{
		if(ptr == NULL)
		{
			__set_errno(EFAULT);
			goto out;
		}
	}
	#endif /* CHECK_FOR_NULL_POINTERS */

	if(len > 0)
	{
		#if 0
		{
			val &= 255;

			do
			{
				if((*m) == val)
				{
					result = (void *)m;
					break;
				}

				m++;
			}
			while(--len > 0);
		}
		#else
		{
			result = __memchr(m,(unsigned char)(val & 255),len);
		}
		#endif
	}

/* out: */

	return(result);
}
