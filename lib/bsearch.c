#include <stdlib.h>

void *bsearch
(const void *key,const void *base,size_t nmemb,size_t size,
 int (*compar)(const void *,const void *))
{ char *base2=(char *)base;
  size_t a=0;
  size_t b=nmemb;
  size_t c;
  int d;
  if(nmemb!=0)
    for(;;)
    { c=(a+b)/2;
      if((d=(*compar)(key,&base2[size*c]))==0)
        return &base2[size*c];
      if(c==a)
        break;
      if(d<0)
        b=c;
      else
        a=c;
    }
  return NULL;
}
