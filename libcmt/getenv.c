/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2022 AmiSSL Open Source Team.
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License in the file LICENSE in the
 source distribution or at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 AmiSSL Official Support Site: https://github.com/jens-maus/amissl

***************************************************************************/

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

