/*
 * $Id: stdlib_calloc.c,v 1.7 2006-01-08 12:04:25 obarthel Exp $
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

#ifndef _STDLIB_HEADERS_H
#include "stdlib_headers.h"
#endif /* _STDLIB_HEADERS_H */

/****************************************************************************/

#undef calloc

/****************************************************************************/

STATIC void *
#ifdef __MEM_DEBUG
__calloc(size_t num_elements,size_t element_size,const char * file,int line)
#else
__calloc(size_t num_elements,size_t element_size)
#endif
{
	void * result = NULL;
	size_t total_size;

	#ifdef __MEM_DEBUG
	{
		/*__check_memory_allocations(file,line);*/
	}
	#endif /* __MEM_DEBUG */

	total_size = num_elements * element_size;

	result = malloc(total_size);
	if(result != NULL)
		memset(result,0,total_size);

	return(result);
}

/****************************************************************************/

void *
calloc(size_t num_elements,size_t element_size)
{
	void * result;

#ifdef __MEM_DEBUG
	result = __calloc(num_elements,element_size,NULL,0);
#else
	result = __calloc(num_elements,element_size);
#endif

	return(result);
}
