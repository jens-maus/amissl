#include <stdlib.h>

/* This qsort function does a little trick:
 * To reduce stackspace it iterates the larger interval instead of doing
 * the recursion on both intervals. 
 * So stackspace is limited to 32*stack_for_1_iteration = 
 * 32*4*(4 arguments+1 returnaddress+11 stored registers) = 2048 Bytes,
 * which is small enough for everybodys use.
 * (And this is the worst case if you own 4GB and sort an array of chars.)
 * Sparing the function calling overhead does improve performance, too.
 */

void qsort
(void *base,size_t nmemb,size_t size,int (*compar)(const void *,const void *))
{ char *base2=(char *)base;
  char tmp;
  size_t i,a,b,c;
  while(nmemb>1)
  { a=0;
    b=nmemb-1;
    c=(a+b)/2; /* Middle element */
    for(;;)
    { while((*compar)(&base2[size*c],&base2[size*a])>0) 
        a++; /* Look for one >= middle */
      while((*compar)(&base2[size*c],&base2[size*b])<0) 
        b--; /* Look for one <= middle */
      if(a>=b)
        break; /* We found no pair */
      for(i=0;i<size;i++) /* swap them */
      { tmp=base2[size*a+i];
        base2[size*a+i]=base2[size*b+i];
        base2[size*b+i]=tmp; }
      if(c==a) /* Keep track of middle element */
        c=b;
      else if(c==b)
        c=a;
      a++; /* These two are already sorted */
      b--;
    } /* a points to first element of right intervall now (b to last of left) */
    b++;
    if(b<nmemb-b) /* do recursion on smaller intervall and iteration on larger one */
    { qsort(base2,b,size,compar);
      base2=&base2[size*b];
      nmemb=nmemb-b;
    }
    else
    { qsort(&base2[size*b],nmemb-b,size,compar);
      nmemb=b; }
  }
  return;
}

