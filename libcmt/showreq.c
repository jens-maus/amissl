#include <proto/exec.h>
#include <proto/intuition.h>
#include <proto/requester.h>

#include <reaction/reaction.h>
#include <classes/requester.h>

#include <string.h>
#include "libcmt.h"

#ifndef __amigaos4__
#include <clib/alib_protos.h>

#define GetInterface(a,b,c,d) ((void *)1)
#define DropInterface(x)
#endif /* !__amigaos4__ */

#ifndef REQ_Image
#define REQ_Image TAG_IGNORE
enum {REQIMAGE_WARNING, REQIMAGE_ERROR, REQIMAGE_QUESTION, REQIMAGE_INFO};
#endif

/* Opens a requester and displays a text to the user. Returns number of the
 * chosen button. The buttons are numbered 1, 2, 3, ..., 0. A single button
 * has number 0.
 */
LONG ShowRequester(enum SRType type, const char *title, const char *body,
                   const char *gadgets)
{
	struct Screen *screen = LockPubScreen(NULL);
	struct RequesterIFace *IRequester = NULL;
	struct Library *RequesterBase;
	Object *requester = NULL;
	LONG ret;

	if(!title) title = "AmiSSL/OpenSSL internal error";
	if(!gadgets) gadgets = "Ok";

	if((RequesterBase = OpenLibrary("requester.class", 44)))
	{
		ULONG req_image;

		switch(type)
		{
			case SR_WARNING:  req_image = REQIMAGE_WARNING; break;
			case SR_ERROR:    req_image = REQIMAGE_ERROR; break;
			case SR_QUESTION: req_image = REQIMAGE_QUESTION; break;
			case SR_INFO:
			default:          req_image = REQIMAGE_INFO; break;
		}

		if((IRequester = (struct RequesterIFace *)GetInterface(RequesterBase, "main", 1, NULL)))
			requester = (Object *)NewObject(REQUESTER_GetClass(), NULL,
			                                REQ_Type, REQTYPE_INFO,
			                                REQ_TitleText, title,
			                                REQ_Image, req_image,
			                                REQ_BodyText, body,
			                                REQ_GadgetText, gadgets,
			                                TAG_DONE);
	}

	if (requester)
	{
		ret = DoMethod(requester, RM_OPENREQ, NULL, NULL, screen, TAG_DONE);
		DisposeObject(requester);
	} 
	else
	{
		struct EasyStruct easy_struct;

		memset(&easy_struct, 0, sizeof(easy_struct));
		easy_struct.es_StructSize = sizeof(easy_struct);
		easy_struct.es_Title = (char *)title;
		easy_struct.es_TextFormat = (char *)body;
		easy_struct.es_GadgetFormat = (char *)gadgets;

		ret = EasyRequestArgs(NULL, &easy_struct, NULL, NULL);
	}

	DropInterface((struct Interface *)IRequester);
	CloseLibrary(RequesterBase);

	UnlockPubScreen(NULL, screen);

	return(ret);
}
