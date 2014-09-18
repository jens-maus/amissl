#include <exec/exec.h>
#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/elf.h>
#include <dos/dos.h>
#include <internal/amissl_compiler.h>
#include <stdarg.h>

//#define DEBUG
#include <internal/debug.h>

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

/* Version Tag */
#define LIBNAME "amisslmaster.library"
#define VSTRING LIBNAME " " MKSTR(VERSION) "." MKSTR(AMISSLMASTERREVISION) " (" MKSTR(AMISSLMASTERDATE) ") " MKSTR(LIBCPU) " version\r\n"

static const char * __attribute__((used)) FullVersion = "\0$VER: " VSTRING;

struct AmiSSLMasterLibrary
{
    struct Library libNode;
    BPTR segList;
    struct AmiSSLMasterLibrary *origLibBase;
    struct Library *ElfBase;
    struct ElfIFace *IElf;
    Elf32_Handle elfHandle;
    uint8 *baserelData;
    /* If you need more data fields, add them here */
};

struct AmiSSLMasterIFace;

extern const struct TagItem libCreateTags[];

struct Library * AMISSL_COMMON_DATA ExecBase;
struct ExecIFace * AMISSL_COMMON_DATA IExec;
struct Library * AMISSL_COMMON_DATA DOSBase;
struct DOSIFace * AMISSL_COMMON_DATA IDOS;

LIBPROTO(__UserLibInit, int, REG(a6, __BASE_OR_IFACE));
LIBPROTO(__UserLibCleanup, int, REG(a6, __BASE_OR_IFACE));
LIBPROTO(__UserLibExpunge, int, REG(a6, __BASE_OR_IFACE));

ULONG LIB_Obtain(UNUSED struct AmiSSLMasterIFace *Self)
{
  return (ULONG)0;
}

ULONG LIB_Release(UNUSED struct AmiSSLMasterIFace *Self)
{
  return (ULONG)0;
}

/* Open the library */
struct Library *libOpen(struct LibraryManagerInterface *Self, ULONG version)
{
	struct AmiSSLMasterLibrary *libBase = (struct AmiSSLMasterLibrary *)Self->Data.LibBase; 
	struct AmiSSLMasterLibrary *newLibBase;

	//kprintf("AmiSSLMaster: Start%08x End: %08x Base: %08x\n",GetDataStart(),GetDataEnd(),GetDataBase());
	kprintf("AmiSSLMaster: LibOpen called with libbase: %08lx, libopen: %d\n",libBase,libBase->libNode.lib_OpenCnt);
	//kprintf("AmiSSLMaster: Will copy from %08x to %08x, size: %08x\n",GetDataStart(),GetDataEnd(),GetDataEnd()-GetDataStart());
	//kprintf("AmiSSLMaster: Env ptr from start: %08x\n",GetDataBase() - GetDataStart());

    /* Add up the open count */
    libBase->libNode.lib_OpenCnt++;

    /* Add any specific open code here 
       Return 0 before incrementing OpenCnt to fail opening */

	if((newLibBase = (struct AmiSSLMasterLibrary *)CreateLibrary((struct TagItem *)libCreateTags)))
	{
		uint32 offset;
		newLibBase->origLibBase = libBase;
		newLibBase->libNode.lib_OpenCnt = libBase->libNode.lib_OpenCnt;
		if((newLibBase->baserelData = (libBase->IElf->CopyDataSegment)(libBase->elfHandle, &offset)))
		{
			struct ExtendedLibrary *extlib;
			kprintf("AmiSSLMaster: Env vector: %08x\n",newLibBase->baserelData);

			extlib = (struct ExtendedLibrary *)((ULONG)newLibBase + newLibBase->libNode.lib_PosSize);
			
			extlib->MainIFace->Data.EnvironmentVector = newLibBase->baserelData + offset;

			kprintf("AmiSSLMaster: Environment vector: %08x\n",extlib->MainIFace->Data.EnvironmentVector);

			if(!LIB___UserLibInit((struct AmiSSLMasterIFace *)extlib->MainIFace)) /* SAS/C defined errors the other way */
			{
				kprintf("AmiSSLMaster: Returning libBase: %08lx\n",newLibBase);
				return (struct Library *)newLibBase;
			}

			(libBase->IElf->FreeDataSegmentCopy)(libBase->elfHandle,newLibBase->baserelData);
		}

		DeleteLibrary((struct Library *)newLibBase);
	}

	libBase->libNode.lib_OpenCnt--;
	return NULL;	
}


/* Close the library */
APTR libClose(struct LibraryManagerInterface *Self)
{
  struct AmiSSLMasterLibrary *libBase = (struct AmiSSLMasterLibrary *)Self->Data.LibBase;
  /* Make sure to undo what open did */

	kprintf("AmiSSLMaster: close\n");

  /* Make the close count */
	libBase->origLibBase->libNode.lib_OpenCnt--;

	if(libBase->origLibBase != libBase)
	{
		struct ExtendedLibrary *extlib = (struct ExtendedLibrary *)((ULONG)libBase + libBase->libNode.lib_PosSize);

		LIB___UserLibCleanup((struct AmiSSLMasterIFace *)extlib->MainIFace);
		(libBase->origLibBase->IElf->FreeDataSegmentCopy)(libBase->origLibBase->elfHandle,libBase->baserelData);

		DeleteLibrary((struct Library *)libBase);
	}

  return 0;
}


/* Expunge the library */
APTR libExpunge(struct LibraryManagerInterface *Self)
{
    /* If your library cannot be expunged, return 0 */
    APTR result = (APTR)0;
    struct AmiSSLMasterLibrary *libBase = (struct AmiSSLMasterLibrary *)Self->Data.LibBase;
    if (libBase->libNode.lib_OpenCnt == 0)
    {
		struct ExtendedLibrary *extlib = (struct ExtendedLibrary *)((ULONG)libBase + libBase->libNode.lib_PosSize);

		kprintf("AmiSSLMaster: expunge\n");
		LIB___UserLibExpunge((struct AmiSSLMasterIFace *)extlib->MainIFace);

        result = (APTR)libBase->segList;
        /* Undo what the init code did */
	(libBase->IElf->CloseElfTags)(libBase->elfHandle, CET_ReClose, TRUE, TAG_DONE);
	DropInterface((struct Interface *)libBase->IElf);
	CloseLibrary((struct Library *)libBase->ElfBase);

  Remove((struct Node *)libBase);
  DeleteLibrary((struct Library *)libBase);
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
	struct AmiSSLMasterLibrary *libBase = (struct AmiSSLMasterLibrary *)LibraryBase;

	libBase->libNode.lib_Node.ln_Type = NT_LIBRARY;
	libBase->libNode.lib_Node.ln_Pri  = 0;
	libBase->libNode.lib_Node.ln_Name = LIBNAME;
	libBase->libNode.lib_Flags        = LIBF_SUMUSED|LIBF_CHANGED;
	libBase->libNode.lib_Version      = VERSION;
	libBase->libNode.lib_Revision     = AMISSLMASTERREVISION;
	libBase->libNode.lib_IdString     = VSTRING;

	if((libBase->segList = (BPTR)seglist))
	{
		IExec = (struct ExecIFace *)exec;
		ExecBase = (struct Library *)exec->Data.LibBase;
		LibraryBase = NULL;

		if((DOSBase = OpenLibrary("dos.library",52)))
			IDOS = (struct DOSIFace *)GetInterface(DOSBase,"main",1,NULL);

		if((libBase->ElfBase = OpenLibrary("elf.library",52)))
			libBase->IElf = (struct ElfIFace *)GetInterface(libBase->ElfBase,"main",1,NULL);
		
		if(IDOS && libBase->IElf)
		{
			GetSegListInfoTags(libBase->segList, GSLI_ElfHandle, &libBase->elfHandle, TAG_DONE);
			if(libBase->elfHandle && (libBase->elfHandle = (libBase->IElf->OpenElfTags)(OET_ElfHandle, libBase->elfHandle, TAG_DONE)))
			{
				libBase->origLibBase = libBase;
				LibraryBase = (struct Library *)libBase;
			}
		}

		if(!LibraryBase)
		{
			DropInterface((struct Interface *)libBase->IElf);
			CloseLibrary((struct Library *)libBase->ElfBase);
		}

		DropInterface((struct Interface *)IDOS);
		CloseLibrary((struct Library *)DOSBase);
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

#include "amisslmaster_vectors.c"

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
    {CLT_DataSize,         (uint32)(sizeof(struct AmiSSLMasterLibrary))},
    {CLT_InitFunc,         (uint32)libInit},
    {CLT_Interfaces,       (uint32)libInterfaces},
    {CLT_Vector68K,        (uint32)&main_VecTable68K},
    {TAG_DONE,             0}
};


/* ------------------- ROM Tag ------------------------ */
static const struct Resident lib_res __attribute__ ((used)) =
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

void __baserel_get_addr(struct Interface *self);

asm (" \n\
	.text								\n\
	.globl __baserel_get_addr		 \n\
__baserel_get_addr:		 \n\
	lwz     2,48(3)	/* Fetch EnvironmentVector from struct Interface * */	 \n\
	blr		 \n\
");
