#include <exec/exec.h>
#include <proto/exec.h>
#include <dos/dos.h>
//#include <proto/amisslmaster.h>
#include <internal/amissl_compiler.h>
#include <stdarg.h>

#define kprintf IExec->DebugPrintF

/* Version Tag */

#define VERSION		3
#define REVISION	1
#define VSTRING "amisslmaster version 3.0"
#define LIBNAME "amisslmaster.library"


struct AmiSSLMasterLibrary
{
    struct Library libNode;
    BPTR segList;
	struct AmiSSLMasterLibrary *origLibBase;
    /* If you need more data fields, add them here */
};

struct AmiSSLMasterIFace;

extern const struct TagItem libCreateTags[];

struct Library * AMISSL_COMMON_DATA ExecBase;
struct ExecIFace * AMISSL_COMMON_DATA IExec;

int __UserLibInit(struct AmiSSLMasterIFace *Self);

/*
 * The system (and compiler) rely on a symbol named _start which marks
 * the beginning of execution of an ELF file. To prevent others from 
 * executing this library, and to keep the compiler/linker happy, we
 * define an empty _start symbol here.
 *
 * On the classic system (pre-AmigaOS4) this was usually done by
 * moveq #0,d0
 * rts
 *
 */
void _start(void)
{
    /* If you feel like it, open DOS and print something to the user */
}

ULONG _AmiSSLMaster_Obtain(struct AmiSSLMasterIFace *Self)
{
    /* Write me. Really, I dare you! */
    IExec->DebugPrintF(
		"Function AmiSSLMaster::Obtain not implemented\n");  
    return (ULONG)0;

}

ULONG _AmiSSLMaster_Release(struct AmiSSLMasterIFace *Self)
{
    /* Write me. Really, I dare you! */
    IExec->DebugPrintF(
		"Function AmiSSLMaster::Release not implemented\n");  
    return (ULONG)0;

}

extern APTR GetDataStart(void);
extern APTR GetDataEnd(void);
extern APTR GetDataBase(void);

#define GetDataBase GetDataStart // Quick fix since the linker sometimes misses to set _DATA_BASE_
								// Verify in makefile that __data_start and _DATA_BASE_ are equal

/* Open the library */
struct Library *libOpen(struct LibraryManagerInterface *Self, ULONG version)
{
    struct AmiSSLMasterLibrary *libBase = (struct AmiSSLMasterLibrary *)Self->Data.LibBase; 
    struct AmiSSLMasterLibrary *newLibBase;

	kprintf("Start%08x End: %08x Base: %08x\n",GetDataStart(),GetDataEnd(),GetDataBase());
	kprintf("LibOpen called with libbase: %08lx, libopen: %d\n",libBase,libBase->libNode.lib_OpenCnt);
	kprintf("Will copy from %08x to %08x, size: %08x\n",GetDataStart(),GetDataEnd(),GetDataEnd()-GetDataStart());
	kprintf("Env ptr from start: %08x\n",GetDataBase() - GetDataStart());

    /* Add up the open count */
    libBase->libNode.lib_OpenCnt++;

    /* Add any specific open code here 
       Return 0 before incrementing OpenCnt to fail opening */

	if( newLibBase = (struct AmiSSLMasterLibrary *)IExec->CreateLibrary((struct TagItem *)libCreateTags))
	{
		char *envvec;
		newLibBase->origLibBase = libBase;
		newLibBase->libNode.lib_OpenCnt = libBase->libNode.lib_OpenCnt;
		if(envvec = IExec->AllocVec(GetDataEnd()-GetDataStart(),MEMF_ANY))
		{
			struct ExtendedLibrary *extlib;
			IExec->CopyMem(GetDataStart(),envvec,GetDataEnd()-GetDataStart());
			kprintf("Env vector: %08x\n",envvec);

			extlib = (struct ExtendedLibrary *)((ULONG)newLibBase + newLibBase->libNode.lib_PosSize);
			
			extlib->MainIFace->Data.EnvironmentVector = envvec + (GetDataBase() - GetDataStart());

			kprintf("Returning libBase: %08lx\n",newLibBase);
			kprintf("Environment vector: %08x\n",extlib->MainIFace->Data.EnvironmentVector);

			if(!__UserLibInit((struct AmiSSLIFace *)extlib->MainIFace)) /* SAS/C defined errors the other way */
			{
				return (struct Library *)newLibBase;
			}

			IExec->FreeVec(envvec);
		}
		IExec->DeleteLibrary((struct Library *)newLibBase);
	}

	libBase->libNode.lib_OpenCnt--;
	return NULL;	
}


/* Close the library */
APTR libClose(struct LibraryManagerInterface *Self)
{
    struct AmiSSLMasterLibrary *libBase = (struct AmiSSLMasterLibrary *)Self->Data.LibBase;
    /* Make sure to undo what open did */

    /* Make the close count */
	libBase->origLibBase->libNode.lib_OpenCnt--;

	if(libBase->origLibBase != libBase)
	{
		IExec->DeleteLibrary((struct Library *)libBase);
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
	     result = (APTR)libBase->segList;
        /* Undo what the init code did */

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
    struct AmiSSLMasterLibrary *libBase = (struct AmiSSLMasterLibrary *)LibraryBase;

    IExec = (struct ExecIFace *)exec;
    ExecBase = (struct Library *)exec->Data.LibBase;

    libBase->libNode.lib_Node.ln_Type = NT_LIBRARY;
    libBase->libNode.lib_Node.ln_Pri  = 0;
    libBase->libNode.lib_Node.ln_Name = LIBNAME;
    libBase->libNode.lib_Flags        = LIBF_SUMUSED|LIBF_CHANGED;
    libBase->libNode.lib_Version      = VERSION;
    libBase->libNode.lib_Revision     = REVISION;
    libBase->libNode.lib_IdString     = VSTRING;

    libBase->segList = (BPTR)seglist;

    /* Add additional init code here if you need it. For example, to open additional
       Libraries:
       libBase->UtilityBase = IExec->OpenLibrary("utility.library", 50L);
       if (libBase->UtilityBase)
       {
           libBase->IUtility = (struct UtilityIFace *)IExec->GetInterface(ElfBase->UtilityBase, 
              "main", 1, NULL);
           if (!libBase->IUtility)
               return NULL;
       } else return NULL; */

       return (struct Library *)libBase;
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
const static void * const lib_manager_vectors[] =
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
const static struct TagItem const lib_managerTags[] =
{
    {MIT_Name,             (ULONG)"__library"},
    {MIT_VectorTable,      (ULONG)lib_manager_vectors},
    {MIT_Version,          1},
    {TAG_DONE,             0}
};

/* ------------------- Library Interface(s) ------------------------ */

#include "amisslmaster_vectors.c"

/* Uncomment this line (and see below) if your library has a 68k jump table */
/* extern ULONG VecTable68K; */

const static struct TagItem mainTags[] =
{
    {MIT_Name,              (uint32)"main"},
    {MIT_VectorTable,       (uint32)main_vectors},
    {MIT_Version,           1},
    {TAG_DONE,              0}
};

const static uint32 libInterfaces[] =
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
    /* Uncomment the following line if you have a 68k jump table */
    /* {CLT_Vector68K,        (uint32)&VecTable68K}, */
    {TAG_DONE,             0}
};


/* ------------------- ROM Tag ------------------------ */
const static struct Resident lib_res __attribute__ ((used)) =
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


asm ("									\n\
	.text								\n\
										\n\
	.globl GetDataStart					\n\
GetDataStart:							\n\
	lis		3, __data_start@h			\n\
	ori		3, 3, __data_start@l		\n\
	blr									\n\
										\n\
	.globl GetDataEnd					\n\
GetDataEnd:								\n\
	lis		3, __data_end@h				\n\
	ori		3, 3, __data_end@l			\n\
	blr									\n\
										\n\
	.globl GetDataBase					\n\
GetDataBase:							\n\
	lis		3, _DATA_BASE_@h			\n\
	ori		3, 3, _DATA_BASE_@l			\n\
	blr									\n\
										\n\
	.section .dend, \"wa\", @nobits		\n\
	.space 4							\n\
");
