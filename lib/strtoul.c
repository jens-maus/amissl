#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <errno.h>

unsigned long strtoul(const char *nptr,char **endptr,int base)
{ const char *p=nptr,*q;
  char c=0;
  unsigned long r=0;
  if(base<0||base==1||base>36)
  { if(endptr!=NULL)
      *endptr=(char *)nptr;
    return 0;
  }
  while(isspace(*p))
    p++;
  if(*p=='-'||*p=='+')
    c=*p++;
  if(base==0)
  { if(p[0]=='0')
    { if(tolower(p[1])=='x'&&isxdigit(p[2]))
      { p+=2;
        base=16; }
      else
        base=8;
    }else
      base=10;
  }
  q=p;
  for(;;)
  { int a;
    if(!isalnum(*q))
      break;
    a=isdigit(*q)?*q-'0':tolower(*q)-('a'-10);
    if(a>=base)
      break;
    if(r>(ULONG_MAX-a)/base||r*base>ULONG_MAX-a)
    { errno=ERANGE; /* overflow */
      r=ULONG_MAX; }
    else
      r=r*base+a;
    q++;
  }
  if(q==p) /* Not a single number read */
  { if(endptr!=NULL)
      *endptr=(char *)nptr;
    return 0;
  }
  if(c=='-')
    r=-r;
  if(endptr!=NULL)
    *endptr=(char *)q;
  return r;
}

