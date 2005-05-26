#include <exec/exec.h>
#include <proto/exec.h>
#include <dos/dos.h>
#include <stdarg.h>
#include <internal/amissl_compiler.h>

#include <interfaces/amissl.h>
#include <exec/emulation.h>

//#define DEBUG
#include <internal/debug.h>

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

/* Version Tag */
#define LIBNAME "amissl_v" MKSTR(VERSIONNAME) ".library"
#define VSTRING LIBNAME " " MKSTR(VERSION) "." MKSTR(AMISSLREVISION) " (" MKSTR(AMISSLDATE) ")\r\n"

static const char * __attribute__((used)) FullVersion = "\0$VER: " VSTRING;

struct AmiSSLLibrary
{
    struct Library libNode;
    BPTR segList;
    struct AmiSSLLibrary *origLibBase;
    /* If you need more data fields, add them here */
};

struct AmiSSLIFace;

extern const struct TagItem libCreateTags[];

struct Library * AMISSL_COMMON_DATA ExecBase;
struct ExecIFace * AMISSL_COMMON_DATA IExec;

struct Library *DOSBase;
struct DOSIFace *IDOS;

int __UserLibInit(struct AmiSSLIFace *Self);
int __UserLibCleanup(struct AmiSSLIFace *Self);

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

ULONG _AmiSSL_Obtain(struct AmiSSLIFace *Self)
{
    return (ULONG)0;
}

ULONG _AmiSSL_Release(struct AmiSSLIFace *Self)
{
    return (ULONG)0;

}

extern APTR GetDataStart(void);
extern APTR GetDataEnd(void);
extern APTR GetDataBase(void);
void __init_libcmt_file(void);

/* trampoline to set up r2 */

__attribute__ ((baserel_restore)) int libOpen2(struct AmiSSLIFace *self)
{
	kprintf("DOSBase; %08lx DataStart: %08lx me: %08x\n",&DOSBase,GetDataStart(),libOpen2);
/*	checkdos();
	return 0; */
	if(DOSBase = IExec->OpenLibrary("dos.library", 36))
	{
		if(IDOS = (struct DOSIFace *)IExec->GetInterface(DOSBase,"main",1,NULL))
		{
			__init_libcmt_file();

			if(!__UserLibInit(self)) /* SAS/C defined errors the other way */
			{
				return 1;
			}
		}
		IExec->CloseLibrary(DOSBase);
	}
	return 0;
}

/* Open the library */
struct Library *libOpen(struct LibraryManagerInterface *Self, ULONG version)
{
    struct AmiSSLLibrary *libBase = (struct AmiSSLLibrary *)Self->Data.LibBase; 
    struct AmiSSLLibrary *newLibBase;

	kprintf("LibOpen called with libbase: %08lx, libopen: %d\n",libBase,libBase->libNode.lib_OpenCnt);
	kprintf("Will copy from %08x to %08x, size: %08x\n",GetDataStart(),GetDataEnd(),GetDataEnd()-GetDataStart());
	kprintf("Env ptr from start: %08x\n",GetDataBase() - GetDataStart());

    /* Add up the open count */
    libBase->libNode.lib_OpenCnt++;

    /* Add any specific open code here 
       Return 0 before incrementing OpenCnt to fail opening */

	if( newLibBase = (struct AmiSSLLibrary *)IExec->CreateLibrary((struct TagItem *)libCreateTags))
	{
		char *envvec;
		newLibBase->origLibBase = libBase;
		newLibBase->libNode.lib_OpenCnt = libBase->libNode.lib_OpenCnt;
		if(envvec = IExec->AllocVec(GetDataEnd()-GetDataStart(),MEMF_ANY))
		{
			struct ExtendedLibrary *extlib;
			IExec->CopyMem(GetDataStart(),envvec,GetDataEnd()-GetDataStart());
			kprintf("Env vector for %08lx: %08x\n", newLibBase, envvec);

			extlib = (struct ExtendedLibrary *)((ULONG)newLibBase + newLibBase->libNode.lib_PosSize);
			
			extlib->MainIFace->Data.EnvironmentVector = envvec + (GetDataBase() - GetDataStart());

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
    struct AmiSSLLibrary *libBase = (struct AmiSSLLibrary *)Self->Data.LibBase;
    /* Make sure to undo what open did */

	kprintf("close amissl\n");

    /* Make the close count */
	libBase->origLibBase->libNode.lib_OpenCnt--;

	if(libBase->origLibBase != libBase)
	{
		struct ExtendedLibrary *extlib = (struct ExtendedLibrary *)((ULONG)libBase + libBase->libNode.lib_PosSize);
		void *envvec = extlib->MainIFace->Data.EnvironmentVector - (GetDataBase() - GetDataStart());

		__UserLibCleanup((struct AmiSSLIFace *)extlib->MainIFace);
		kprintf("Freeing env vector for %08lx: %08lx\n", libBase, envvec);
		IExec->FreeVec(envvec);

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
    struct AmiSSLLibrary *libBase = (struct AmiSSLLibrary *)LibraryBase;

    IExec = (struct ExecIFace *)exec;
    ExecBase = (struct Library *)exec->Data.LibBase;

    libBase->libNode.lib_Node.ln_Type = NT_LIBRARY;
    libBase->libNode.lib_Node.ln_Pri  = 0;
    libBase->libNode.lib_Node.ln_Name = LIBNAME;
    libBase->libNode.lib_Flags        = LIBF_SUMUSED|LIBF_CHANGED;
    libBase->libNode.lib_Version      = VERSION;
    libBase->libNode.lib_Revision     = AMISSLREVISION;
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

	kprintf("libInit returning: %08lx\n",libBase);
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

#include "amissl_vectors.c"

extern const ULONG VecTable68K;

const static struct TagItem mainTags[] =
{
    {MIT_Name,              (uint32)"main"},
    {MIT_VectorTable,       (uint32)main_vectors},
    {MIT_Version,           1},
    {MIT_Flags, IFLF_PROTECTED},
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
    {CLT_DataSize,         (uint32)(sizeof(struct AmiSSLLibrary))},
    {CLT_InitFunc,         (uint32)libInit},
    {CLT_Interfaces,       (uint32)libInterfaces},
    {CLT_Vector68K,        (uint32)&VecTable68K},
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

int VARARGS68K AMISSL_LIB_ENTRY _AmiSSL_BIO_printf(struct AmiSSLIFace *Self, BIO * bio, const char * format, ...)
{
	__gnuc_va_list va;
	va_list os4va;
	int ret;

	__builtin_va_start(va,format);
	os4va.args.m68k = va_getlinearva(va,char *);
	os4va.is_68k = 1;

	ret = BIO_vprintf(bio,format,os4va);

	__builtin_va_end(va);

	return ret;
}

int VARARGS68K AMISSL_LIB_ENTRY _AmiSSL_BIO_snprintf(struct AmiSSLIFace *Self, char * buf, size_t n, const char * format, ...)
{
	__gnuc_va_list va;
	va_list os4va;
	int ret;

	__builtin_va_start(va,format);
	os4va.args.m68k = va_getlinearva(va,char *);
	os4va.is_68k = 1;

	ret = BIO_vsnprintf(buf,n,format,os4va);

	__builtin_va_end(va);

	return ret;
}

void VARARGS68K AMISSL_LIB_ENTRY _AmiSSL_ERR_add_error_data(struct AmiSSLIFace *Self, int num, ...)
{
	__gnuc_va_list va;
	va_list os4va;

	__builtin_va_start(va,num);
	os4va.args.m68k = va_getlinearva(va,char *);
	os4va.is_68k = 1;

	ERR_add_error_dataA(num,os4va);

	__builtin_va_end(va);
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_vprintf(struct AmiSSLIFace *Self, BIO *bio, const char *format, long *params)
{
	va_list os4va;
	os4va.args.m68k = (char *)params;
	os4va.is_68k = 1;
	return BIO_vprintf(bio,format,os4va);
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_vsnprintf(struct AmiSSLIFace *Self, char * buf, size_t n, const char * format, long *params)
{
	va_list os4va;
	os4va.args.m68k = (char *)params;
	os4va.is_68k = 1;
	return BIO_vsnprintf(buf,n,format,os4va);
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_add_error_dataA(struct AmiSSLIFace *Self, int num, long *params)
{
	va_list os4va;
	os4va.args.m68k = (char *)params;
	os4va.is_68k = 1;
	ERR_add_error_dataA(num,os4va);
}

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
	__gnuc_va_list va;
	long *ptr;
	int result,i;

	__builtin_va_start(va,func);

	//kprintf("__amigaos4_check68k_trampoline called with: %d args, func: %08x\n",nargs,func);

	ptr = va_getlinearva(va,long *);
	
	//kprintf("Stack: %08x %08x %08x %08x %08x %08x %08x\n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4],ptr[5],ptr[6]);

	for(i=0;i<nargs;i++)
	{
		ptr[i*2] = ET_RegisterD0 + i; // Replace 0's with tag id's
	}
	//kprintf("Stack: %08x %08x %08x %08x %08x %08x %08x\n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4],ptr[5],ptr[6]);

	result = IExec->EmulateTags(trampoline_code[nargs],ET_SaveRegs,TRUE,
		ET_RegisterA5,func,
		TAG_MORE,ptr);
	__builtin_va_end(va);
	return result;
}

void openlog(void) {}
void closelog(void) {}

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
