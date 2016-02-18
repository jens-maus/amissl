/*
 * $Id: string_memset.c,v 1.8 2006-09-22 09:02:51 obarthel Exp $
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

INLINE STATIC VOID
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

			to = (unsigned char *)_to;
		}
	}

	while(len-- > 0)
		(*to++) = value;
}

/****************************************************************************/

/* This is ugly: GCC 2.95.x assumes that 'unsigned long' is used in the built-in
   memcmp/memcpy/memset functions instead of 'size_t'. This can produce warnings
   where none are necessary. */
#if defined(__GNUC__) && (__GNUC__ < 3)
void *
memset(void *ptr, int val, unsigned long len)
#else
void *
memset(void *ptr, int val, size_t len)
#endif /* __GNUC__ && __GNUC__ < 3 */
{
	void * result = ptr;
	unsigned char * m = ptr;

	assert( (len == 0) || (ptr != NULL && (int)len > 0) );

	#if defined(CHECK_FOR_NULL_POINTERS)
	{
		if(ptr == NULL)
		{
			__set_errno(EFAULT);
			goto out;
		}
	}
	#endif /* CHECK_FOR_NULL_POINTERS */

	#if 0
	{
		while(len-- > 0)
			(*m++) = val;
	}
	#else
	{
		__memset(m,(unsigned char)(val & 255),len);
	}
	#endif

	#if defined(CHECK_FOR_NULL_POINTERS)
 out:
  #endif

	return(result);
}
