#include <string.h>

#ifdef __GNUC__
#define __stdargs
#endif

struct HashEntry
{
	long Key;
	void *UserData;
};

struct HashTable
{
	long InitialSize;
	long TableSize;
	long Entries;
	long Locked;
	__stdargs void *(*allocator)(long);
	__stdargs void (*deallocator)(void *);
	struct HashEntry *HashEntries;
};

static void *grow(struct HashTable *old);
static void shrink(struct HashTable *old);

struct HashTable *h_new(long InitialSize,__stdargs void *(*allocator)(long),__stdargs void (*deallocator)(void *))
{
	struct HashTable *new;

	if( (new = allocator(sizeof(struct HashTable))) )
	{
		//kprintf("Allocating %ld bytes\n",sizeof(struct HashEntry)*InitialSize);
		if( (new->HashEntries = allocator(sizeof(struct HashEntry)*InitialSize)) )
		{
			memset(new->HashEntries,0,sizeof(struct HashEntry)*InitialSize);
			new->Locked=0;
			new->Entries=0;
			new->TableSize = InitialSize;
			new->InitialSize = InitialSize;
			new->allocator = allocator;
			new->deallocator = deallocator;
			return new;	
		}
		deallocator(new);
	}
	return NULL;
}

void h_free(struct HashTable *h)
{
	h->deallocator(h->HashEntries);
	h->deallocator(h);
}

void *h_insert(struct HashTable *h,long Key,void * UserData)
{
	long h1;
	long h2;
	long i;
	long start;

	if(h->Locked)
		return 0;

	//kprintf("Inserting\n");

	if(h->Entries*2 > h->TableSize)
		if(!grow(h))
			return 0;
	
	h1=(((long)Key)/8) % h->TableSize;
	h2=1+(((long)Key)/8) % (h->TableSize-2);

	h->Entries++;

	start=h1;
	do
	{
		i=start;
		do
		{
			if(h->HashEntries[i].Key==0 || h->HashEntries[i].Key==1)
			{
				h->HashEntries[i].Key = Key;
				h->HashEntries[i].UserData = UserData;
				return h;
			}
			i=(i+h2) % h->TableSize;
		}
		while(i!=start);
		start = (start+1) % h->TableSize;
	}
	while(start!=h1);
	return 0;
}

void * h_find(struct HashTable *h,long Key)
{
	long h1=(((long)Key)/8) % h->TableSize;
	long h2=1+(((long)Key)/8) % (h->TableSize-2);
	long i;
	long start;

	start=h1;
	do
	{
		i=start;
		do
		{
			if(h->HashEntries[i].Key==0)
			{
				return 0;
			}
			else if(h->HashEntries[i].Key==Key)
			{
				return h->HashEntries[i].UserData;
			}
			i=(i+h2) % h->TableSize;
		}
		while(i!=start);
		start = (start+1) % h->TableSize;
	}
	while(start!=h1);
	return 0;
}

void h_delete(struct HashTable *h,long Key)
{
	long h1=(((long)Key)/8) % h->TableSize;
	long h2=1+(((long)Key)/8) % (h->TableSize-2);
	long i;
	long start;

	//kprintf("Deleting %08lx\n",Key);

	start=h1;
	do
	{
		i=start;
		do
		{
			if(h->HashEntries[i].Key==0)
			{
				return; /* Not found */
			}
			else if(h->HashEntries[i].Key==Key)
			{
				h->HashEntries[i].Key = 1;
				h->Entries--;
				if(!h->Locked && h->Entries*4 < h->TableSize && h->TableSize > h->InitialSize*2)
				{
					shrink(h);
				}
				return;
			}
			i=(i+h2) % h->TableSize;
		}
		while(i!=start);
		start = (start+1) % h->TableSize;
	}
	while(start!=h1);
	return; /* Not found */
}

void h_doall(struct HashTable *h,__stdargs void (*func)(long,void *))
{
	long i=h->TableSize-1;
	h->Locked++; /* Avoid rehashing. Add to the list will simply not work, delete will not shrink */
	for(;i>=0;i--)
	{
		if(h->HashEntries[i].Key!=0 && h->HashEntries[i].Key!=1)
		{
			func(h->HashEntries[i].Key,h->HashEntries[i].UserData);
		}
	}
	h->Locked--;
	if(h->Entries*4 < h->TableSize && h->TableSize > h->InitialSize*2)
	{ /* Delayed shrink */
		shrink(h);
	}
}

/* We grow the table with the 2^n-1 formula to maximize the probability of beeing
 * relative prime to the hash modulo
 */

static void *grow(struct HashTable *h)
{
	struct HashEntry *old;
	long i;

	//kprintf("Growing from %ld entries to",h->TableSize);

	old = h->HashEntries;
	if( (h->HashEntries = h->allocator(sizeof(struct HashEntry)*((h->TableSize+1)*2-1))) )
	{
		i=h->TableSize-1;
		h->TableSize = (h->TableSize+1)*2-1;
		memset(h->HashEntries,0,sizeof(struct HashEntry)*h->TableSize);
		//kprintf("%ld entries\n",h->TableSize);
		for(;i>=0;i--)
		{
			if(old[i].Key!=0 && old[i].Key!=1)
			{
				h->Entries--; /* This is not a new entry */
				h_insert(h,old[i].Key,old[i].UserData);
			}
		}
		h->deallocator(old);
		return h;
	}
	h->HashEntries = old;
	return NULL;
}

static void shrink(struct HashTable *h)
{
	struct HashEntry *old;
	long i;

	//kprintf("Shrinking from %ld entries to",h->TableSize);

	old = h->HashEntries;
	if( (h->HashEntries = h->allocator(sizeof(struct HashEntry)*((h->TableSize+1)/2-1))) )
	{
		i=h->TableSize-1;
		h->TableSize = (h->TableSize+1)/2-1;
		memset(h->HashEntries,0,sizeof(struct HashEntry)*h->TableSize);
		//kprintf("%ld entries\n",h->TableSize);
		for(;i>=0;i--)
		{
			if(old[i].Key!=0 && old[i].Key!=1)
			{
				h->Entries--; /* This is not a new entry */
				h_insert(h,old[i].Key,old[i].UserData);
			}
		}
		h->deallocator(old);
		return;
	}
	h->HashEntries = old;
	return;
}
