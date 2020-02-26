#include <stdlib.h>
#include <dos/dos.h>
#include <dos/var.h>
#include <proto/dos.h>
#include <proto/exec.h>
#include <internal/amissl.h>

char *__getenv(const char *name)
{
  SETUPSTATE();
  size_t len,i=0;
  char *buffer=NULL;
  if(state->getenv_var!=NULL)
    free(state->getenv_var);
  do
  { i+=1024;
    if(buffer!=NULL) /* free old buffer */
      free(buffer);
    buffer=malloc(i); /* and get a new one */
    if(buffer==NULL) /* Oh, dear */
      len=-1;
    else
      len=GetVar((char *)name,buffer,i,GVF_BINARY_VAR)+1;
  }while(len>=i); /* just to be sure we got everything, we _require_ 1 unused byte */
  if(len<=0) /* Variable doesn't exist */
    state->getenv_var=NULL;
  else
  { state->getenv_var=malloc(len);
    if(state->getenv_var!=NULL)
      CopyMem(buffer,state->getenv_var,len);
  }
  if(buffer!=NULL)
    free(buffer);
  return state->getenv_var;
}

#if !defined(__MORPHOS__)
char *getenv(const char *name)
{
	return __getenv(name);
}
#endif

