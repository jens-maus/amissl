/*
 * Copyright 2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#if defined(_WIN32)
# include <windows.h>
#endif

#include <string.h>
#include "testutil.h"

#if !defined(OPENSSL_THREADS) || defined(CRYPTO_TDEBUG)

typedef unsigned int thread_t;

static int run_thread(thread_t *t, void (*f)(void))
{
    f();
    return 1;
}

static int wait_for_thread(thread_t thread)
{
    return 1;
}

#elif defined(OPENSSL_SYS_AMIGA)

#include <dos/dostags.h>
#include <proto/exec.h>
#include <proto/dos.h>

typedef struct Process *thread_t;

struct ThreadArgsMsg {
   struct Message tp_ExecMessage;
   void *tp_Arg;
};

static void *thread_run(void *arg)
{
    void (*f)(void);
    struct Process *thisproc = (struct Process *)FindTask(NULL);

#if defined(__amigaos4__)
    arg = thisproc->pr_Task.tc_UserData;
#else
    struct ThreadArgsMsg *msg;
    struct Task *parent;

    WaitPort(&(thisproc->pr_MsgPort));
    msg = (struct ThreadArgsMsg *)GetMsg(&(thisproc->pr_MsgPort));
    arg = msg->tp_Arg;
    parent = msg->tp_ExecMessage.mn_ReplyPort->mp_SigTask;
    ReplyMsg((struct Message *)msg);
#endif

    *(void **) (&f) = arg;
    f();

#if !defined(__amigaos4__)
    Signal(parent,SIGF_SINGLE);
#endif

    return NULL;
}

static int run_thread(thread_t *t, void (*f)(void))
{
#if defined(__amigaos4__)
    *t = CreateNewProcTags(NP_Entry, (ULONG)thread_run,
                           NP_Child, TRUE,
                           NP_NotifyOnDeathSigTask, FindTask(NULL),
                           NP_UserData, (ULONG)f,
                           NP_StackSize, 8192,
                           TAG_END);
#else
    if ((*t = CreateNewProcTags(NP_Entry, (ULONG)thread_run,
                                NP_StackSize, 8192,
                                TAG_END)))
    {
        struct Process *thisproc = (struct Process *)FindTask(NULL);
        struct ThreadArgsMsg argsmsg;
        argsmsg.tp_ExecMessage.mn_Node.ln_Type = NT_MESSAGE;
        argsmsg.tp_ExecMessage.mn_ReplyPort = &(thisproc->pr_MsgPort);
        argsmsg.tp_ExecMessage.mn_Length = sizeof(struct ThreadArgsMsg);
        argsmsg.tp_Arg = f;
        PutMsg(&((*t)->pr_MsgPort),(struct Message *)&argsmsg);
        WaitPort(&(thisproc->pr_MsgPort));
        GetMsg(&(thisproc->pr_MsgPort));
    }
#endif

    return *t != NULL;
}

static int wait_for_thread(thread_t thread)
{
#if defined(__amigaos4__)
    Wait(SIGF_CHILD);
#else
    Wait(SIGF_SINGLE);
#endif
    return 1;
}

#elif defined(OPENSSL_SYS_WINDOWS)

typedef HANDLE thread_t;

static DWORD WINAPI thread_run(LPVOID arg)
{
    void (*f)(void);

    *(void **) (&f) = arg;

    f();
    return 0;
}

static int run_thread(thread_t *t, void (*f)(void))
{
    *t = CreateThread(NULL, 0, thread_run, *(void **) &f, 0, NULL);
    return *t != NULL;
}

static int wait_for_thread(thread_t thread)
{
    return WaitForSingleObject(thread, INFINITE) == 0;
}

#else

typedef pthread_t thread_t;

static void *thread_run(void *arg)
{
    void (*f)(void);

    *(void **) (&f) = arg;

    f();
    return NULL;
}

static int run_thread(thread_t *t, void (*f)(void))
{
    return pthread_create(t, NULL, thread_run, *(void **) &f) == 0;
}

static int wait_for_thread(thread_t thread)
{
    return pthread_join(thread, NULL) == 0;
}

#endif

