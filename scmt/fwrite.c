#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t fwrite(const void *ptr,size_t size,size_t nmemb,FILE *stream)
{
	signed long subsize;
	unsigned long total;
	unsigned char *b=(unsigned char *)ptr;
	if(!(total=size*nmemb)) /* Just in case size==0 */
		return total;
	do
	{
		if(stream->_wcnt<stream->_size)
		{
			subsize=total>stream->_size-stream->_wcnt?stream->_size-stream->_wcnt:total;
			memcpy(stream->_ptr,b,subsize);
			stream->_ptr+=subsize;
			stream->_wcnt+=subsize;
			b+=subsize;
			total-=subsize;
		}
		else
		{
			int c;
			c=*b++;
			if(putc(c,stream)==EOF)
				break;
			total--;
		}
	}while(total);
	return (b-(unsigned char *)ptr)/size;
}
