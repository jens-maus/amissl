#include <stdlib.h>
#include <proto/dos.h>

char *getenv(const char *name)
{ static char *var=NULL;
  size_t len,i=0;
  do
  { i+=256;
    if(var!=NULL) /* free old buffer */
      free(var);
    var=malloc(i); /* and get a new one */
    if(var==NULL) /* Oh, dear */
      return NULL;
    len=GetVar((char *)name,var,i,GVF_BINARY_VAR)+1;
  }while(len>=i); /* just to be sure we got everything, we _require_ 1 unused byte */
  if(len==0) /* Variable doesn't exist */
    return NULL;
  else
    return var;
}
