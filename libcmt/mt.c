#include <proto/exec.h>
#include <exec/memory.h>
#include "libcmt.h"

__far struct SignalSemaphore mt_cs = {NULL};
__far LONG SemaphoreInitialized = 0;
__far struct HashTable *thread_hash = NULL;

/*
void checkSemaphore(struct SignalSemaphore *sem)
{
	kprintf("Link: Succ: %08lx Pred: %08lx Type: %ld Pri: %ld Name: %08lx\n",
		sem->ss_Link.ln_Succ,sem->ss_Link.ln_Pred,sem->ss_Link.ln_Type,sem->ss_Link.ln_Pri,sem->ss_Link.ln_Name);
	kprintf("Nestcount: %ld\n",sem->ss_NestCount);
	kprintf("WaitQueue: Head: %08lx Tail: %08lx TailPred: %08lx\n",sem->ss_WaitQueue.mlh_Head,sem->ss_WaitQueue.mlh_Tail,sem->ss_WaitQueue.mlh_TailPred);
	kprintf("MultipleLink: sr.Succ: %08lx sr.Pred: %08lx sr.Waiter: %08lx\n",sem->ss_MultipleLink.sr_Link.mln_Succ,sem->ss_MultipleLink.sr_Link.mln_Pred,sem->ss_MultipleLink.sr_Waiter);
	kprintf("Owner: %08lx QueueCount: %ld\n",sem->ss_Owner,sem->ss_QueueCount);
}
*/
long mtgeta4(void)
{
	void *ret;
	ObtainSemaphore(&mt_cs);
	ret = h_find(thread_hash, (LONG)FindTask(NULL));
	ReleaseSemaphore(&mt_cs);
	return (long)ret;
}

__stdargs void *h_allocfunc(long size)
{
	return AllocVec(size,MEMF_ANY);
}

__stdargs void h_freefunc(void *mem)
{
	FreeVec(mem);
}

int initmta4(void)
{
	if(!thread_hash)
	{
		Forbid();
		if(!SemaphoreInitialized)
		{
			InitSemaphore(&mt_cs);
			SemaphoreInitialized = TRUE;
		}
		Permit();
		ObtainSemaphore(&mt_cs);
		if(!thread_hash)
		{
			thread_hash = h_new(7, h_allocfunc,h_freefunc);
		}
		ReleaseSemaphore(&mt_cs);
	}
	return (int)thread_hash;
}

__stdargs void cleanupState(long Key,void *res)
{
	h_delete(thread_hash,Key);
}

void donemta4(void)
{
	ObtainSemaphore(&mt_cs);
	if(thread_hash)
	{
		h_doall(thread_hash,cleanupState); /* Clean up any left overs from tasks not calling cleanup */
		h_free(thread_hash);
		thread_hash = NULL;
	}
	ReleaseSemaphore(&mt_cs);
}

int addmta4user(void)
{
	int res;
	ObtainSemaphore(&mt_cs);
	res = (int)h_insert(thread_hash, (long)FindTask(NULL), (APTR)getreg(REG_A4));
	ReleaseSemaphore(&mt_cs);
	return res;
}

void removemta4user(void)
{
	ObtainSemaphore(&mt_cs);
	h_delete(thread_hash, (long)FindTask(NULL));
	ReleaseSemaphore(&mt_cs);
}
