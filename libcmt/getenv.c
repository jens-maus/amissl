#include <stdlib.h>
#include <dos/dos.h>
#include <dos/var.h>
#include <proto/dos.h>
#include <internal/amissl.h>

char *__getenv(const char *name)
{
  SETUPSTATE();
  size_t len,i=0;
  do
  { i+=256;
    if(state->getenv_var!=NULL) /* free old buffer */
      free(state->getenv_var);
    state->getenv_var=malloc(i); /* and get a new one */
    if(state->getenv_var==NULL) /* Oh, dear */
      return NULL;
    len=GetVar((char *)name,state->getenv_var,i,GVF_BINARY_VAR)+1;
  }while(len>=i); /* just to be sure we got everything, we _require_ 1 unused byte */
  if(len<=0) /* Variable doesn't exist */
    return NULL;
  else
    return state->getenv_var;
}

#ifdef __amigaos4__

char *getenv(const char *name)
{
	return __getenv(name);
}

#endif
