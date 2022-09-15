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

#include <proto/timer.h>
#include <proto/exec.h>
#include <devices/timer.h>
#include <timeval.h>

#include "libcmt.h"

#ifdef __amigaos4__

#ifdef CreateMsgPort
#undef CreateMsgPort
#endif
#define CreateMsgPort() AllocSysObject(ASOT_PORT,NULL)
#ifdef DeleteMsgPort
#undef DeleteMsgPort
#endif
#define DeleteMsgPort(msgPort) FreeSysObject(ASOT_PORT,msgPort)
#ifdef CreateIORequest
#undef CreateIORequest
#endif
#define CreateIORequest(ioReplyPort,size) AllocSysObjectTags(ASOT_IOREQUEST,ASOIOR_ReplyPort,ioReplyPort,ASOIOR_Size,size,TAG_DONE)
#ifdef DeleteIORequest
#undef DeleteIORequest
#endif
#define DeleteIORequest(ioReq) FreeSysObject(ASOT_IOREQUEST,ioReq)

#endif /* __amigaos4__ */

struct TimeRequest *OpenTimer(AMISSL_STATE *state)
{
  struct MsgPort *port;
  struct TimeRequest *tr;

  if(state->TimeRequest == NULL)
  {
    if((port = state->TimerPort) != NULL || (port = CreateMsgPort()) != NULL)
    {
      if((tr = (struct TimeRequest *)CreateIORequest(port, sizeof(*tr))) != NULL)
      {
        if(OpenDevice(TIMERNAME, UNIT_MICROHZ, (struct IORequest *)tr, 0) == 0)
        {
#ifdef __amigaos4__
          if((state->ITimer = (struct TimerIFace *)GetInterface((struct Library *)tr->Request.io_Device, "main", 1, NULL)) != NULL)
#else
          if(tr->Request.io_Device != NULL)
#endif
          {
	    state->TimerPort = port;
	    state->TimeRequest = tr;
            return tr;
          }
          CloseDevice((struct IORequest *)tr);
        }
        DeleteIORequest((struct IORequest *)tr);
      }
      if(state->TimerPort == NULL)
      {
        DeleteMsgPort(port);
      }
    }
  }

  return state->TimeRequest;
}

#ifdef __amigaos4__
struct IOStdReq *OpenEntropy(AMISSL_STATE *state)
{
  struct MsgPort *port;
  struct IOStdReq *er;

  if(state->EntropyRequest == NULL)
  {
    if((port = state->TimerPort) != NULL || (port = CreateMsgPort()) != NULL)
    {
      if((er = (struct IOStdReq *)CreateIORequest(port, sizeof(*er))) != NULL)
      {
        if(OpenDevice(TIMERNAME, UNIT_ENTROPY, (struct IORequest *)er, 0) == 0)
        {
	  state->TimerPort = port;
	  state->EntropyRequest = er;
	  return er;
        }
        DeleteIORequest((struct IORequest *)er);
      }
      if(state->TimerPort == NULL)
      {
        DeleteMsgPort(port);
      }
    }
  }

  return state->EntropyRequest;
}
#endif

void CleanupTimers(AMISSL_STATE *state)
{
#ifdef __amigaos4__
  if(state->EntropyRequest)
  {
    CloseDevice((struct IORequest *)state->EntropyRequest);
    DeleteIORequest((struct IORequest *)state->EntropyRequest);
  }
  if(state->ITimer)
  {
    DropInterface((struct Interface *)state->ITimer);
  }
#endif
  if(state->TimeRequest)
  {
    CloseDevice((struct IORequest *)state->TimeRequest);
    DeleteIORequest((struct IORequest *)state->TimeRequest);
  }
  if(state->TimerPort)
  {
    DeleteMsgPort(state->TimerPort);
  }
}
