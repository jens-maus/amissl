#undef __USE_INLINE__ // prevent the inline4 macros from being active

#include <exec/exec.h>
#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/elf.h>
#include <dos/dos.h>
#include <proto/intuition.h>
#include <intuition/intuition.h>
#include <stdarg.h>
#include <internal/amissl_compiler.h>
#include <internal/amissl.h>

#include <interfaces/amissl.h>
#include <exec/emulation.h>

//#define DEBUG
#include <internal/debug.h>

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

/* Version Tag */
#define LIBNAME "amissl_v" MKSTR(VERSIONNAME) ".library"
#define VSTRING LIBNAME " " MKSTR(VERSION) "." MKSTR(AMISSLREVISION) " (" MKSTR(AMISSLDATE) ") " MKSTR(LIBCPU) " version\r\n"

static const char * __attribute__((used)) FullVersion = "\0$VER: " VSTRING;

struct AmiSSLLibrary
{
    struct Library libNode;
    BPTR segList;
    struct AmiSSLLibrary *origLibBase;
    struct Library *ElfBase;
    struct ElfIFace *IElf;
    Elf32_Handle elfHandle;
    uint8 *baserelData;
    /* If you need more data fields, add them here */
};

struct AmiSSLIFace;

extern const struct TagItem libCreateTags[];

LIBPROTO(__UserLibInit, int, REG(a6, __BASE_OR_IFACE));
LIBPROTO(__UserLibCleanup, int, REG(a6, __BASE_OR_IFACE));
LIBPROTO(__UserLibExpunge, int, REG(a6, __BASE_OR_IFACE));

ULONG Obtain()
{
  return (ULONG)0;
}

ULONG Release()
{
  return (ULONG)0;
}

void __init_libcmt_file(void);

__attribute__((baserel_restore)) int libOpen2(struct AmiSSLIFace *self)
{
//	kprintf("DOSBase; %08lx DataStart: %08lx me: %08x\n",&DOSBase,GetDataStart(),libOpen2);

	if((DOSBase = IExec->OpenLibrary("dos.library", 52)))
	{
		if((IDOS = (struct DOSIFace *)IExec->GetInterface(DOSBase,"main",1,NULL)))
		{
			__init_libcmt_file();

			if(!LIB___UserLibInit(self)) /* SAS/C defined errors the other way */
			{
				return 1;
			}
		}
		IExec->CloseLibrary(DOSBase);
	}

	return 0;
}

/* Open the library */
struct Library *libOpen(struct LibraryManagerInterface *Self, UNUSED ULONG version)
{
	struct AmiSSLLibrary *libBase = (struct AmiSSLLibrary *)Self->Data.LibBase;
	struct AmiSSLLibrary *newLibBase;

	kprintf("LibOpen called with libbase: %08lx, libopen: %d\n",libBase,libBase->libNode.lib_OpenCnt);
//	kprintf("Will copy from %08x to %08x, size: %08x\n",GetDataStart(),GetDataEnd(),GetDataEnd()-GetDataStart());
//	kprintf("Env ptr from start: %08x\n",GetDataBase() - GetDataStart());

	/* Add up the open count */
	libBase->libNode.lib_OpenCnt++;

	/* Add any specific open code here
	   Return 0 before incrementing OpenCnt to fail opening */

	if((newLibBase = (struct AmiSSLLibrary *)IExec->CreateLibrary((struct TagItem *)libCreateTags)))
	{
		uint32 offset;
		newLibBase->origLibBase = libBase;
		newLibBase->libNode.lib_OpenCnt = libBase->libNode.lib_OpenCnt;
		if((newLibBase->baserelData = libBase->IElf->CopyDataSegment(libBase->elfHandle, &offset)) != NULL)
		{
			struct ExtendedLibrary *extlib;
			kprintf("Env vector for %08lx: %08x\n", newLibBase, newLibBase->baserelData);

			extlib = (struct ExtendedLibrary *)((ULONG)newLibBase + newLibBase->libNode.lib_PosSize);

			extlib->MainIFace->Data.EnvironmentVector = newLibBase->baserelData + offset;

			kprintf("Returning libBase: %08lx\n",newLibBase);
			kprintf("Environment vector: %08x\n",extlib->MainIFace->Data.EnvironmentVector);

			if(libOpen2((struct AmiSSLIFace *)extlib->MainIFace))
			{
				/* This should always be written to debug output since it's important */
				if (offsetof(struct AmiSSLIFace, UI_read_string_lib) != 10140
				    || offsetof(struct AmiSSLIFace, UI_write_string_lib) != 10144)
					IExec->DebugPrintF("*** WARNING: UI_read_string_lib and/or UI_write_string_lib have wrong offset!\n");

				return (struct Library *)newLibBase;
			}

			libBase->IElf->FreeDataSegmentCopy(libBase->elfHandle,newLibBase->baserelData);
		}
		IExec->DeleteLibrary((struct Library *)newLibBase);
	}

	libBase->libNode.lib_OpenCnt--;
	return NULL;
}


/* Close the library */
APTR libClose(struct LibraryManagerInterface *Self)
{
    struct AmiSSLLibrary *libBase = (struct AmiSSLLibrary *)Self->Data.LibBase;
    /* Make sure to undo what open did */

	kprintf("Close amissl\n");

    /* Make the close count */
	libBase->origLibBase->libNode.lib_OpenCnt--;

	if(libBase->origLibBase != libBase)
	{
		struct ExtendedLibrary *extlib = (struct ExtendedLibrary *)((ULONG)libBase + libBase->libNode.lib_PosSize);

		LIB___UserLibCleanup((struct AmiSSLIFace *)extlib->MainIFace);
		kprintf("Freeing env vector for %08lx: %08lx\n", libBase, libBase->baserelData);
		libBase->origLibBase->IElf->FreeDataSegmentCopy(libBase->origLibBase->elfHandle,libBase->baserelData);

		IExec->DeleteLibrary((struct Library *)libBase);
	}

    return 0;
}


/* Expunge the library */
APTR libExpunge(struct LibraryManagerInterface *Self)
{
    /* If your library cannot be expunged, return 0 */
    APTR result = (APTR)0;
    struct AmiSSLLibrary *libBase = (struct AmiSSLLibrary *)Self->Data.LibBase;
    if (libBase->libNode.lib_OpenCnt == 0)
    {
		struct ExtendedLibrary *extlib = (struct ExtendedLibrary *)((ULONG)libBase + libBase->libNode.lib_PosSize);

		kprintf("Expunge amissl\n");
		LIB___UserLibExpunge((struct AmiSSLIFace *)extlib->MainIFace);

        result = (APTR)libBase->segList;
        /* Undo what the init code did */
	libBase->IElf->CloseElfTags(libBase->elfHandle, CET_ReClose, TRUE, TAG_DONE);
	IExec->DropInterface((struct Interface *)libBase->IElf);
	IExec->CloseLibrary((struct Library *)libBase->ElfBase);

        IExec->Remove((struct Node *)libBase);
        IExec->DeleteLibrary((struct Library *)libBase);
    }
    else
    {
        result = (APTR)0;
        libBase->libNode.lib_Flags |= LIBF_DELEXP;
    }
    return result;
}

/* The ROMTAG Init Function */
struct Library *libInit(struct Library *LibraryBase, APTR seglist, struct Interface *exec)
{
	struct AmiSSLLibrary *libBase = (struct AmiSSLLibrary *)LibraryBase;

	libBase->libNode.lib_Node.ln_Type = NT_LIBRARY;
	libBase->libNode.lib_Node.ln_Pri  = 0;
	libBase->libNode.lib_Node.ln_Name = (STRPTR)LIBNAME;
	libBase->libNode.lib_Flags        = LIBF_SUMUSED|LIBF_CHANGED;
	libBase->libNode.lib_Version      = VERSION;
	libBase->libNode.lib_Revision     = AMISSLREVISION;
	libBase->libNode.lib_IdString     = (STRPTR)VSTRING;

	if((libBase->segList = (BPTR)seglist))
	{
		struct Library *dosBase;
		struct DOSIFace *idos;

		IExec = (struct ExecIFace *)exec;
		SysBase = (struct Library *)exec->Data.LibBase;
		LibraryBase = NULL;

		if((dosBase = IExec->OpenLibrary("dos.library",52)))
			idos = (struct DOSIFace *)IExec->GetInterface(dosBase,"main",1,NULL);

		if((libBase->ElfBase = IExec->OpenLibrary("elf.library",52)))
			libBase->IElf = (struct ElfIFace *)IExec->GetInterface(libBase->ElfBase,"main",1,NULL);

		if(idos && libBase->IElf)
		{
			idos->GetSegListInfoTags(libBase->segList, GSLI_ElfHandle, &libBase->elfHandle, TAG_DONE);
			if(libBase->elfHandle && (libBase->elfHandle = libBase->IElf->OpenElfTags(OET_ElfHandle, libBase->elfHandle, TAG_DONE)))
			{
				libBase->origLibBase = libBase;
				LibraryBase = (struct Library *)libBase;
			}
		}

		if(!LibraryBase)
		{
			IExec->DropInterface((struct Interface *)libBase->IElf);
			IExec->CloseLibrary((struct Library *)libBase->ElfBase);
		}

    if(idos != NULL)
    {
		  IExec->DropInterface((struct Interface *)idos);
		  IExec->CloseLibrary((struct Library *)dosBase);
    }
	}

	kprintf("libInit returning: %08lx\n",LibraryBase);
	return LibraryBase;
}

/* ------------------- Manager Interface ------------------------ */
/* These are generic. Replace if you need more fancy stuff */
static LONG _manager_Obtain(struct LibraryManagerInterface *Self)
{
    return Self->Data.RefCount++;
}

static ULONG _manager_Release(struct LibraryManagerInterface *Self)
{
    return Self->Data.RefCount--;
}

/* Manager interface vectors */
static const void * const lib_manager_vectors[] =
{
    (void *)_manager_Obtain,
    (void *)_manager_Release,
    (void *)0,
    (void *)0,
    (void *)libOpen,
    (void *)libClose,
    (void *)libExpunge,
    (void *)0,
    (void *)-1,
};

/* "__library" interface tag list */
static const struct TagItem const lib_managerTags[] =
{
    {MIT_Name,             (ULONG)"__library"},
    {MIT_VectorTable,      (ULONG)lib_manager_vectors},
    {MIT_Version,          1},
    {TAG_DONE,             0}
};

/* ------------------- Library Interface(s) ------------------------ */

#include "amissl_vectors.c"

extern const ULONG main_VecTable68K;

static const struct TagItem mainTags[] =
{
    {MIT_Name,              (uint32)"main"},
    {MIT_VectorTable,       (uint32)main_v1_vectors},
    {MIT_Version,           1},
    {MIT_Flags, IFLF_PROTECTED},
    {TAG_DONE,              0}
};

static const uint32 libInterfaces[] =
{
    (uint32)lib_managerTags,
    (uint32)mainTags,
    (uint32)0
};

const struct TagItem libCreateTags[] =
{
    {CLT_DataSize,         (uint32)(sizeof(struct AmiSSLLibrary))},
    {CLT_InitFunc,         (uint32)libInit},
    {CLT_Interfaces,       (uint32)libInterfaces},
    {CLT_Vector68K,        (uint32)&main_VecTable68K},
    {TAG_DONE,             0}
};


/* ------------------- ROM Tag ------------------------ */
static const struct Resident lib_res __attribute__((used)) =
{
    RTC_MATCHWORD,
    (struct Resident *)&lib_res,
    (struct Resident *)(&lib_res+1),
    RTF_NATIVE|RTF_AUTOINIT, /* Add RTF_COLDSTART if you want to be resident */
    VERSION,
    NT_LIBRARY, /* Make this NT_DEVICE if needed */
    0, /* PRI, usually not needed unless you're resident */
    LIBNAME,
    VSTRING,
    (APTR)libCreateTags
};

struct SocketIFace *GetSocketIFace(UNUSED int modifies_errno)
{
	AMISSL_STATE *p = GetAmiSSLState();

	/* The ISocketPtr might be pointing to uninitialized ISocket in __UserLibInit */
	if (!p->socket_errno_initialized)
		initialize_socket_errno();

	return(p->ISocketPtr ? *p->ISocketPtr : NULL);
}

int VARARGS68K LIB_BIO_printf(UNUSED struct AmiSSLIFace *Self, BIO * bio, const char * format, ...)
{
	VA_LIST args;
	int ret;

	VA_START(args, format);
	ret = BIO_vprintf(bio,format,args);
	VA_END(args);

	return ret;
}

int VARARGS68K LIB_BIO_snprintf(UNUSED struct AmiSSLIFace *Self, char * buf, size_t n, const char * format, ...)
{
	VA_LIST args;
	int ret;

	VA_START(args, format);
	ret = BIO_vsnprintf(buf,n,format,args);
	VA_END(args);

	return ret;
}

void VARARGS68K LIB_OPENSSL_showfatal(UNUSED struct AmiSSLIFace *Self, const char * fmta, ...)
{
	VA_LIST args;
	struct EasyStruct ErrReq;
	char error[512];

	VA_START(args, fmta);
	BIO_vsnprintf(error,sizeof(error),fmta,args);
	VA_END(args);

	ErrReq.es_StructSize   = sizeof(struct EasyStruct);
	ErrReq.es_Flags        = 0;
	ErrReq.es_Title        = "AmiSSL/OpenSSL internal error";
	ErrReq.es_TextFormat   = error;
	ErrReq.es_GadgetFormat = "Abort";

	// Open an Easy Requester
	IIntuition->EasyRequestArgs(NULL, &ErrReq, NULL, NULL);
}

void VARARGS68K LIB_ERR_add_error_data(UNUSED struct AmiSSLIFace *Self, int num, ...)
{
	VA_LIST args;

	VA_START(args, num);
	ERR_add_error_vdata(num,args);
	VA_END(args);
}

int LIB_BIO_vprintf(UNUSED struct AmiSSLIFace *Self, BIO *bio, const char *format, long *params)
{
	return BIO_vprintf(bio,format,params);
}

int LIB_BIO_vsnprintf(UNUSED struct AmiSSLIFace *Self, char * buf, size_t n, const char * format, long *params)
{
	return BIO_vsnprintf(buf,n,format,params);
}

#if 0
void LIB_ERR_add_error_vdata(UNUSED struct AmiSSLIFace *Self, int num, VA_LIST params)
{
	ERR_add_error_vdata(num,params);
}
#endif

int __amigaos4_check68k_check(int (*func)())
{
//	kprintf("__amigaos4_check68k_check_func called with: %08x\n",func);
	return IExec->IsNative(func);
}

AMISSL_COMMON_DATA static UWORD trampoline_code [][6] =
{
	{0x4ED5,0,0,0,0,0},				//JMP     (A5)
	{0x48E7,0x8000,0x4E95,0x588F,0x4E75,0},		//MOVEM.L D0,         -(A7);   JSR  (A5);   ADDQ.L  #4,A7;   RTS
	{0x48E7,0xC000,0x4E95,0x508F,0x4E75,0},		//MOVEM.L D0-D1,      -(A7);   JSR  (A5);   ADDQ.L  #8,A7;   RTS
	{0x48E7,0xE000,0x4E95,0xDEFC,0x000C,0x4E75},	//MOVEM.L D0-D2,      -(A7);   JSR  (A5);   ADDA.W  #0x000C,A7  RTS
	{0x48E7,0xF000,0x4E95,0xDEFC,0x0010,0x4E75},	//MOVEM.L D0-D3,      -(A7);   JSR  (A5);   ADDA.W  #0x0010,A7  RTS
	{0x48E7,0xF800,0x4E95,0xDEFC,0x0014,0x4E75},	//MOVEM.L D0-D4,      -(A7);   JSR  (A5);   ADDA.W  #0x0014,A7  RTS
	{0x48E7,0xFC00,0x4E95,0xDEFC,0x0018,0x4E75},	//MOVEM.L D0-D5,      -(A7);   JSR  (A5);   ADDA.W  #0x0018,A7  RTS
	{0x48E7,0xFE00,0x4E95,0xDEFC,0x001C,0x4E75},	//MOVEM.L D0-D6,      -(A7);   JSR  (A5);   ADDA.W  #0x001C,A7  RTS
	{0x48E7,0xFF00,0x4E95,0xDEFC,0x0020,0x4E75},	//MOVEM.L D0-D7,      -(A7);   JSR  (A5);   ADDA.W  #0x0020,A7  RTS
	{0x48E7,0xFF80,0x4E95,0xDEFC,0x0024,0x4E75},	//MOVEM.L D0-D7/A0,   -(A7);   JSR  (A5);   ADDA.W  #0x0024,A7  RTS
	{0x48E7,0xFFC0,0x4E95,0xDEFC,0x0028,0x4E75},	//MOVEM.L D0-D7/A0-A1,-(A7);   JSR  (A5);   ADDA.W  #0x0028,A7  RTS
	{0x48E7,0xFFE0,0x4E95,0xDEFC,0x002C,0x4E75},	//MOVEM.L D0-D7/A0-A2,-(A7);   JSR  (A5);   ADDA.W  #0x002C,A7  RTS
	{0x48E7,0xFFF0,0x4E95,0xDEFC,0x0030,0x4E75},	//MOVEM.L D0-D7/A0-A3,-(A7);   JSR  (A5);   ADDA.W  #0x0030,A7  RTS
	{0x48E7,0xFFF8,0x4E95,0xDEFC,0x0034,0x4E75},	//MOVEM.L D0-D7/A0-A3,-(A7);   JSR  (A5);   ADDA.W  #0x0034,A7  RTS
};

VARARGS68K int __amigaos4_check68k_trampoline(int nargs,int func,...)
{
	VA_LIST args;
	long *ptr;
	int result,i;

	VA_START(args, func);

	//kprintf("__amigaos4_check68k_trampoline called with: %d args, func: %08x\n",nargs,func);

	ptr = VA_ARG(args, long *);

	//kprintf("Stack: %08x %08x %08x %08x %08x %08x %08x\n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4],ptr[5],ptr[6]);

	for(i=0;i<nargs;i++)
	{
		ptr[i*2] = ET_RegisterD0 + i; // Replace 0's with tag id's
	}
	//kprintf("Stack: %08x %08x %08x %08x %08x %08x %08x\n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4],ptr[5],ptr[6]);

	result = IExec->EmulateTags(trampoline_code[nargs],ET_SaveRegs,TRUE,
		ET_RegisterA5,func,
		TAG_MORE,ptr);
	VA_END(args);
	return result;
}
