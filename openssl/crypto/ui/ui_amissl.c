#ifdef AMISSL
#include <openssl/e_os2.h>

#include "ui_locl.h"
#include "cryptlib.h"

#include <stdio.h> /* for BUFSIZ */

#include <proto/exec.h>
#include <proto/intuition.h>
#include <proto/requester.h>
#include <internal/amissl.h>

#include <reaction/reaction.h>
#include <classes/requester.h>

#ifndef __amigaos4__
#include <clib/alib_protos.h>
#include <proto/reqtools.h>
#include <libraries/reqtools.h>

#define GetInterface(a,b,c,d) ((void *)1)
#define DropInterface(x)
#endif /* !__amigaos4__ */

#ifndef REQ_Image
#define REQ_Image TAG_IGNORE
enum {REQIMAGE_WARNING, REQIMAGE_ERROR, REQIMAGE_QUESTION, REQIMAGE_INFO};
#endif

enum SRType {SR_INFO, SR_WARNING, SR_ERROR, SR_QUESTION};

/* Opens a requester and displays a text to the user. Returns number of the
 * chosen button. The buttons are numbered 1, 2, 3, ..., 0. A single button
 * has number 0.
 */
static LONG ShowRequester(enum SRType type, const char *title, const char *body,
                          const char *gadgets)
{
	struct Screen *screen = LockPubScreen(NULL);
	struct RequesterIFace *IRequester = NULL;
	struct Library *RequesterBase;
	Object *requester = NULL;
	LONG ret;

	if (RequesterBase = OpenLibrary("requester.class", 44))
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

		if (IRequester = (struct RequesterIFace *)GetInterface(RequesterBase, "main", 1, NULL))
			requester = (Object *)NewObject(REQUESTER_GetClass(), NULL,
			                                REQ_Type, REQTYPE_INFO,
			                                REQ_TitleText, title,
			                                REQ_Image, req_image,
			                                REQ_BodyText, body,
			                                REQ_GadgetText, gadgets,
			                                TAG_DONE);
	}

	if (requester)
		ret = DoMethod(requester, RM_OPENREQ, NULL, NULL, screen, TAG_DONE);
	else
	{
		static struct EasyStruct easy_struct = {sizeof(struct EasyStruct), 0};
		
		easy_struct.es_Title = (char *)title;
		easy_struct.es_TextFormat = (char *)body;
		easy_struct.es_GadgetFormat = (char *)gadgets;

		ret = EasyRequestArgs(NULL, &easy_struct, NULL, NULL);
	}

	DisposeObject(requester);
	DropInterface((struct Interface *)IRequester);
	CloseLibrary(RequesterBase);

	UnlockPubScreen(NULL, screen);

	return(ret);
}

/* Opens a string requester to get a string to specified buffer.
 * max_string_len should be at least buffer size minus one.
 * Returns 1 for OK, 0 for Cancel, -1 for error.
 */
static LONG GetStringReq(const char *title, const char *body, char *buffer,
                         int max_string_len, BOOL visible)
{
	struct Screen *screen = LockPubScreen(NULL);
	struct RequesterIFace *IRequester = NULL;
	struct Library *RequesterBase;
#ifndef __amigaos4__
	struct Library *ReqToolsBase;
#endif
	Object *requester = NULL;
	LONG ret;

	*buffer = '\0';

	if (RequesterBase = OpenLibrary("requester.class", 44))
	{
		if (IRequester = (struct RequesterIFace *)GetInterface(RequesterBase, "main", 1, NULL))
			requester = (Object *)NewObject(REQUESTER_GetClass(), NULL,
			                                REQ_Type, REQTYPE_STRING,
			                                REQ_TitleText, title,
			                                REQ_BodyText, body,
			                                REQ_GadgetText, "_OK|_Cancel",
			                                REQS_Buffer, buffer,
			                                REQS_MaxChars, max_string_len,
			                                REQ_Image, REQIMAGE_QUESTION,
				                            REQS_AllowEmpty, TRUE,
				                            REQS_Invisible, !visible,
				                            TAG_DONE);
	}

	if (requester)
		ret = DoMethod(requester, RM_OPENREQ, NULL, NULL, screen, TAG_DONE);
#ifndef __amigaos4__
	else if (ReqToolsBase = OpenLibrary("reqtools.library", 38))
	{
		ret = rtGetString(buffer, max_string_len, (char *)body, NULL,
		                  RTGS_AllowEmpty, TRUE,
		                  RTGS_Invisible, !visible,
		                  TAG_DONE) != 0;

		CloseLibrary(ReqToolsBase);
	}
#endif
	else
	{
		ShowRequester(SR_ERROR, "AmiSSL error", "Could not open string requester!",
		              "Cancel");
		ret = -1;
	}

	DisposeObject(requester);
	DropInterface((struct Interface *)IRequester);
	CloseLibrary(RequesterBase);

	UnlockPubScreen(NULL, screen);

	return(ret);
}

/* This is modeled per OpenSSL write_string. The design *is* a bit weird... */
int UI_write_string_lib(UI *ui, UI_STRING *uis)
{
	int type;

	type = UI_get_string_type(uis);

	if (type == UIT_ERROR)
		ShowRequester(SR_ERROR, "AmiSSL caller error", UI_get0_output_string(uis),
		              "Continue");
	else if (type == UIT_INFO)
		ShowRequester(SR_INFO, "AmiSSL caller information", UI_get0_output_string(uis),
		              "Continue");

	return(1);
}

int UI_read_string_lib(UI *ui, UI_STRING *uis)
{
	int type, ret;
	
	type = UI_get_string_type(uis);

	switch(type)
	{
		case UIT_BOOLEAN:
		{
			char first_ok_char = *uis->_.boolean_data.ok_chars;
			char first_cancel_char = *uis->_.boolean_data.cancel_chars;
			char char_buffer[2] = {0};
			const char *gadgets;

			/* If OK characters begin with Y/y and cancel characters begin
			 * with N/n, use "Yes|No" for gadget format, otherwise "OK|Cancel".
			 */
			if ((first_ok_char == 'y' || first_ok_char == 'Y')
			    && (first_cancel_char == 'n' || first_cancel_char == 'N'))
				gadgets = "Yes|No";
			else
				gadgets = "OK|Cancel";

			if (ShowRequester(SR_QUESTION, "Question", UI_get0_output_string(uis),
			                  gadgets) == 0)
				char_buffer[0] = first_cancel_char;
			else
				char_buffer[0] = first_ok_char;

			ret = UI_set_result(ui, uis, &char_buffer[0]) >= 0;
			break;
		}

		case UIT_PROMPT:
		case UIT_VERIFY:
		{
			char *buffer = (char *)OPENSSL_malloc(BUFSIZ);

			if (buffer)
			{
				ret = GetStringReq(type == UIT_PROMPT ? "Please enter a string"
				                                      : "Verifying input",
				                   UI_get0_output_string(uis),
				                   buffer, BUFSIZ - 1,
				                   (UI_get_input_flags(uis)
				                    & UI_INPUT_FLAG_ECHO) == UI_INPUT_FLAG_ECHO) == 1
				      && UI_set_result(ui, uis, buffer) >= 0;

				OPENSSL_cleanse(buffer, BUFSIZ);
				OPENSSL_free(buffer);

				if (ret != 0 && type == UIT_VERIFY)
				{
					if (strcmp(UI_get0_result_string(uis), UI_get0_test_string(uis)) != 0)
					{
						ShowRequester(SR_ERROR, "Error", "Verify error!", "Cancel");
						ret = 0;
					}
				}
			}
			else
				ret = 0;
			break;
		}

		default:
			ret = 1;
			break;
	}

	return(ret);
}

/* Some applications will call UI_METHOD function pointers without checking
 * if they are NULL (which is valid). This is to take care of that.
 */
static int nop_method(void)
{
	return(1);
}

int read_string_cb(UI *ui, UI_STRING *uis);
int write_string_cb(UI *ui, UI_STRING *uis);

static UI_METHOD ui_amissl =
{
	"AmiSSL user interface",
	(int (*)(UI *))nop_method, /* open session */
	write_string_cb,
	(int (*)(UI *))nop_method, /* flush */
	read_string_cb,
	(int (*)(UI *))nop_method, /* close session */
	NULL, /* construct prompt */
};

UI_METHOD *UI_OpenSSL(void)
{
	return(&ui_amissl);
}

/* Put this here to avoid possible conflicts with code above */

#include <proto/amissl.h>

int read_string_cb(UI *ui, UI_STRING *uis)
{
	SETUPSTATE();
#ifdef __amigaos4__
	struct AmiSSLIFace *IAmiSSL=state->IAmiSSL;
#else
	struct Library *AmiSSLBase=state->AmiSSLBase;
#endif	
	return UI_read_string_lib(ui,uis);
}

int write_string_cb(UI *ui, UI_STRING *uis)
{
	SETUPSTATE();
#ifdef __amigaos4__
	struct AmiSSLIFace *IAmiSSL=state->IAmiSSL;
#else
	struct Library *AmiSSLBase=state->AmiSSLBase;
#endif
	return UI_write_string_lib(ui,uis);
}

#ifdef __amigaos4__
#include <exec/emulation.h>
#include <exec/types.h>

AMISSL_STATE *stub_GetAmiSSLState(void)
{
	return GetAmiSSLState();
}

#pragma pack(2)

struct AmiSSLEmuTrap {
	UWORD  Entry[13];
	ULONG  Instruction;                 /* TRAPINST, see below  */
	UWORD  Type;                        /* TRAPTYPE, see below  */
	ULONG  (*Function)(ULONG *Reg68K);  /* PPC function address, */
};

static const struct AmiSSLEmuTrap read_string_emul = {
	0x6118,		// BSR	       stub
	0x2F0E,		// MOVE.L      A6,-(A7)
	0x2C40,		// MOVEA.L     D0,A6
	0x2C6E,0x0000,	// MOVEA.L     0000(A6),A6
	0x206F,0x0008,	// MOVEA.L     0008(A7),A0
	0x226F,0x000C,	// MOVEA.L     000C(A7),A1
	0x4EAE,0xC508,	// JSR         -$3AF8(A6)
	0x2C5F,		// MOVEA.L     (A7)+,A6
	0x4E75,		// RTS
	TRAPINST,
	TRAPTYPE,
	(ULONG (*)(ULONG *))stub_GetAmiSSLState
};

static const struct AmiSSLEmuTrap write_string_emul = {
	0x6118,		// BSR	       stub
	0x2F0E,		// MOVE.L      A6,-(A7)
	0x2C40,		// MOVEA.L     D0,A6
	0x2C6E,0x0000,	// MOVEA.L     0000(A6),A6
	0x206F,0x0008,	// MOVEA.L     0008(A7),A0
	0x226F,0x000C,	// MOVEA.L     000C(A7),A1
	0x4EAE,0xC502,	// JSR         -$3AFE(A6)
	0x2C5F,		// MOVEA.L     (A7)+,A6
	0x4E75,		// RTS
	TRAPINST,
	TRAPTYPE,
	(ULONG (*)(ULONG *))stub_GetAmiSSLState
};

static const UWORD nop_method_emul[2] = {
	0x7001,		// MOVEQ.L #1, D0
	0x4E75		// RTS
};

static const UI_METHOD ui_amissl_68k =
{
	"AmiSSL user interface",
	(int (*)(UI *))nop_method_emul, /* open session */
	(int (*)(UI *,UI_STRING *))&write_string_emul,
	(int (*)(UI *))nop_method_emul, /* flush */
	(int (*)(UI *,UI_STRING *))&read_string_emul,
	(int (*)(UI *))nop_method_emul, /* close session */
	NULL, /* construct prompt */
};

UI_METHOD *UI_OpenSSL_68k(void)
{
	return((UI_METHOD *)&ui_amissl_68k);
}

#endif

#else /* AMISSL */
static void *dummy=&dummy;
#endif /* AMISSL */
