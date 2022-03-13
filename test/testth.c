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

#include <proto/exec.h>
#include <exec/memory.h>
#include "libcmt.h"

__stdargs void *h_allocfunc(long size)
{
	return AllocVec(size,MEMF_ANY);
}

__stdargs void h_freefunc(void *mem)
{
	FreeVec(mem);
}

void main(void)
{
	APTR h;
#if 0
	if(h = h_new(7, h_allocfunc,h_freefunc))
	{
		APTR v;
		h_insert(h,0x08EC8E60,(APTR)0);
		h_delete(h,0x08EC8E60);
		h_insert(h,0x09052730,(APTR)1);
		h_insert(h,0x09061A00,(APTR)2);
		h_insert(h,0x0906A2F8,(APTR)3);
		h_insert(h,0x09072BF0,(APTR)4);
		h_insert(h,0x0907B4E8,(APTR)5);
		h_insert(h,0x09083DE0,(APTR)6);

		v = h_find(h,0x0907B4E8);
		h_free(h);
	}
#endif
#if 0
	if(h = h_new(7, h_allocfunc,h_freefunc))
	{
		APTR v;

		h_insert(h,0x08F20CA0,(APTR)1);
		h_delete(h,0x08F20CA0);
		h_insert(h,0x09020158,(APTR)2);
		h_insert(h,0x090355A0,(APTR)3);
		h_insert(h,0x0903DE98,(APTR)4);
		h_insert(h,0x09046790,(APTR)5);
		h_insert(h,0x0904F088,(APTR)6);
		h_insert(h,0x09057980,(APTR)7);
		h_delete(h,0x090355A0);
		h_delete(h,0x0904F088);
		h_delete(h,0x09046790);
		v = h_find(h,0x09020158);
		h_free(h);
	}
#endif
	if(h = h_new(7, h_allocfunc,h_freefunc))
	{
		APTR v;

		h_insert(h,0x08D0C080,(APTR)1);
		h_delete(h,0x08D0C080);
		h_insert(h,0x08D0C080,(APTR)1);
		h_insert(h,0x08F5AC08,(APTR)1);
		h_insert(h,0x08F63500,(APTR)1);
		h_insert(h,0x08F6BDF8,(APTR)1);
		h_insert(h,0x08FD6B18,(APTR)1);
		h_insert(h,0x08FDF410,(APTR)1);
		h_delete(h,0x08F63500);
		h_delete(h,0x08F6BDF8);
		h_delete(h,0x08FD6B18);
		v = h_find(h,0x08F5AC08);
		h_delete(h,0x08D0C080);
		h_delete(h,0x08FDF410);
		h_free(h);
	}
}
