#ifndef INTERNAL_AMISSL_H
#define INTERNAL_AMISSL_H

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

#include <exec/types.h>
#include <time.h>
#include <internal/amissl_compiler.h>

// default stack size for applications
#define MIN_STACKSIZE 65536

typedef struct {
	struct Library *AmiSSLBase;
#ifdef __amigaos4__
	struct AmiSSLIFace *IAmiSSL;
#endif
	unsigned long pid;
	int errno;
	int *errno_ptr;		// If the app supplied an errno ptr
	int socket_errno_initialized;
	char *getenv_var;
	APTR stack;
	struct tm localtime_var;
	struct Library *SocketBase;
#if !defined(__amigaos4__) && !defined(__MORPHOS__)
	LONG TCPIPStackType;
	struct MLinkLock *MLinkLock; // This is really ancient, but ib still supports it so...
#endif
#ifdef __amigaos4__
	struct SocketIFace *ISocket;
	struct SocketIFace **ISocketPtr;
	struct TimerIFace *ITimer;
	struct IOStdReq *EntropyRequest;
#endif
	struct TimeRequest *TimeRequest;
	struct MsgPort *TimerPort;
	ULONG ThreadGroupID; // All states for a specific library base have the same ID
} AMISSL_STATE;

STDARGS AMISSL_STATE *GetAmiSSLState(void);
STDARGS void SetAmiSSLerrno(int);
STDARGS int GetAmiSSLerrno(void);

#define SETUPSTATE() AMISSL_STATE *state = GetAmiSSLState()

#if defined(__amigaos4__)
# define LOCK_INIT(mutex) ((mutex = AllocSysObject(ASOT_MUTEX, NULL)) != NULL)
# define LOCK_FREE(mutex) FreeSysObject(ASOT_MUTEX, mutex)
# define LOCK_OBTAIN(mutex) MutexObtain(mutex)
# define LOCK_RELEASE(mutex) MutexRelease(mutex)
# define LOCK_DECLARE(mutex) APTR mutex
#else
# define LOCK_INIT(sem) (InitSemaphore(&(sem)), TRUE)
# define LOCK_FREE(sem) while(0)
# define LOCK_OBTAIN(sem) ObtainSemaphore(&(sem))
# define LOCK_RELEASE(sem) ReleaseSemaphore(&(sem))
# define LOCK_DECLARE(sem) struct SignalSemaphore sem
#endif

#endif /* !INTERNAL_AMISSL_H */
