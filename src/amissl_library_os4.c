#include <exec/exec.h>
#include <proto/exec.h>
#include <dos/dos.h>
#include <stdarg.h>
#include <internal/amissl_compiler.h>
#include <interfaces/amissl.h>

#define kprintf IExec->DebugPrintF

/* Version Tag */
//#include "amissl.library_rev.h"

#define VERSION 3
#define REVISION 0
#define VSTRING "amissl version 3.0"
#define LIBNAME "amissl_v097e.library"


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
    /* Write me. Really, I dare you! */
    IExec->DebugPrintF(
		"Function AmiSSL::Obtain not implemented\n");  
    return (ULONG)0;

}

ULONG _AmiSSL_Release(struct AmiSSLIFace *Self)
{
    /* Write me. Really, I dare you! */
    IExec->DebugPrintF(
		"Function AmiSSL::Release not implemented\n");  
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
			kprintf("Env vector: %08x\n",envvec);

			extlib = (struct ExtendedLibrary *)((ULONG)newLibBase + newLibBase->libNode.lib_PosSize);
			
			extlib->MainIFace->Data.EnvironmentVector = envvec + (GetDataBase() - GetDataStart());

			kprintf("Returning libBase: %08lx\n",newLibBase);
			kprintf("Environment vector: %08x\n",extlib->MainIFace->Data.EnvironmentVector);
			
			if(libOpen2((struct AmiSSLIFace *)extlib->MainIFace))
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
    struct AmiSSLLibrary *libBase = (struct AmiSSLLibrary *)Self->Data.LibBase;
    /* Make sure to undo what open did */

kprintf("close amissl\n");

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



int errno; // libc strtol needs this, but nobody checks the results anyway

int openlog(void)
{
	return 0;
}
       
int closelog(void)
{
	return 0;
}

#define __CTYPE_CONTROL		0x01
#define __CTYPE_DIGIT		0x02
#define __CTYPE_HEX_DIGIT	0x04
#define __CTYPE_PUNCTUATION	0x08
#define __CTYPE_PRINTABLE	0x10
#define __CTYPE_WHITE_SPACE	0x20
#define __CTYPE_LOWER_CASE	0x40
#define __CTYPE_UPPER_CASE	0x80

const unsigned char __ctype_table[257] =
{
        /*   -1     */ 0,
        /*   0      */ __CTYPE_CONTROL,
        /*   1      */ __CTYPE_CONTROL,
        /*   2      */ __CTYPE_CONTROL,
        /*   3      */ __CTYPE_CONTROL,
        /*   4      */ __CTYPE_CONTROL,
        /*   5      */ __CTYPE_CONTROL,
        /*   6      */ __CTYPE_CONTROL,
        /*   7      */ __CTYPE_CONTROL,
        /*   8      */ __CTYPE_CONTROL,
        /*   9      */ __CTYPE_CONTROL|__CTYPE_WHITE_SPACE,
        /*  10      */ __CTYPE_CONTROL|__CTYPE_WHITE_SPACE,
        /*  11      */ __CTYPE_CONTROL|__CTYPE_WHITE_SPACE,
        /*  12      */ __CTYPE_CONTROL|__CTYPE_WHITE_SPACE,
        /*  13      */ __CTYPE_CONTROL|__CTYPE_WHITE_SPACE,
        /*  14      */ __CTYPE_CONTROL,
        /*  15      */ __CTYPE_CONTROL,
        /*  16      */ __CTYPE_CONTROL,
        /*  17      */ __CTYPE_CONTROL,
        /*  18      */ __CTYPE_CONTROL,
        /*  19      */ __CTYPE_CONTROL,
        /*  20      */ __CTYPE_CONTROL,
        /*  21      */ __CTYPE_CONTROL,
        /*  22      */ __CTYPE_CONTROL,
        /*  23      */ __CTYPE_CONTROL,
        /*  24      */ __CTYPE_CONTROL,
        /*  25      */ __CTYPE_CONTROL,
        /*  26      */ __CTYPE_CONTROL,
        /*  27      */ __CTYPE_CONTROL,
        /*  28      */ __CTYPE_CONTROL,
        /*  29      */ __CTYPE_CONTROL,
        /*  30      */ __CTYPE_CONTROL,
        /*  31      */ __CTYPE_CONTROL,
        /*  32, ' ' */ __CTYPE_PRINTABLE|__CTYPE_WHITE_SPACE,
        /*  33, '!' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  34, '"' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  35, '#' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  36, '$' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  37, '%' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  38, '&' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  39, ''' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  40, '(' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  41, ')' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  42, '*' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  43, '+' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  44, ',' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  45, '-' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  46, '.' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  47, '/' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  48, '0' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  49, '1' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  50, '2' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  51, '3' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  52, '4' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  53, '5' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  54, '6' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  55, '7' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  56, '8' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  57, '9' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  58, ':' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  59, ';' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  60, '<' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  61, '=' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  62, '>' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  63, '?' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  64, '@' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  65, 'A' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  66, 'B' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  67, 'C' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  68, 'D' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  69, 'E' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  70, 'F' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  71, 'G' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  72, 'H' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  73, 'I' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  74, 'J' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  75, 'K' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  76, 'L' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  77, 'M' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  78, 'N' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  79, 'O' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  80, 'P' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  81, 'Q' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  82, 'R' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  83, 'S' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  84, 'T' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  85, 'U' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  86, 'V' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  87, 'W' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  88, 'X' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  89, 'Y' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  90, 'Z' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  91, '[' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  92, '\' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  93, ']' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  94, '^' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  95, '_' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  96, '`' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  97, 'a' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /*  98, 'b' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /*  99, 'c' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 100, 'd' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 101, 'e' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 102, 'f' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 103, 'g' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 104, 'h' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 105, 'i' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 106, 'j' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 107, 'k' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 108, 'l' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 109, 'm' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 110, 'n' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 111, 'o' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 112, 'p' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 113, 'q' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 114, 'r' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 115, 's' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 116, 't' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 117, 'u' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 118, 'v' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 119, 'w' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 120, 'x' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 121, 'y' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 122, 'z' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 123, '{' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /* 124, '|' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /* 125, '}' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /* 126, '~' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /* 127      */ __CTYPE_CONTROL,
        /* 128      */ 0,
        /* 129      */ 0,
        /* 130      */ 0,
        /* 131      */ 0,
        /* 132      */ 0,
        /* 133      */ 0,
        /* 134      */ 0,
        /* 135      */ 0,
        /* 136      */ 0,
        /* 137      */ 0,
        /* 138      */ 0,
        /* 139      */ 0,
        /* 140      */ 0,
        /* 141      */ 0,
        /* 142      */ 0,
        /* 143      */ 0,
        /* 144      */ 0,
        /* 145      */ 0,
        /* 146      */ 0,
        /* 147      */ 0,
        /* 148      */ 0,
        /* 149      */ 0,
        /* 150      */ 0,
        /* 151      */ 0,
        /* 152      */ 0,
        /* 153      */ 0,
        /* 154      */ 0,
        /* 155      */ 0,
        /* 156      */ 0,
        /* 157      */ 0,
        /* 158      */ 0,
        /* 159      */ 0,
        /* 160      */ 0,
        /* 161      */ 0,
        /* 162      */ 0,
        /* 163      */ 0,
        /* 164      */ 0,
        /* 165      */ 0,
        /* 166      */ 0,
        /* 167      */ 0,
        /* 168      */ 0,
        /* 169      */ 0,
        /* 170      */ 0,
        /* 171      */ 0,
        /* 172      */ 0,
        /* 173      */ 0,
        /* 174      */ 0,
        /* 175      */ 0,
        /* 176      */ 0,
        /* 177      */ 0,
        /* 178      */ 0,
        /* 179      */ 0,
        /* 180      */ 0,
        /* 181      */ 0,
        /* 182      */ 0,
        /* 183      */ 0,
        /* 184      */ 0,
        /* 185      */ 0,
        /* 186      */ 0,
        /* 187      */ 0,
        /* 188      */ 0,
        /* 189      */ 0,
        /* 190      */ 0,
        /* 191      */ 0,
        /* 192      */ 0,
        /* 193      */ 0,
        /* 194      */ 0,
        /* 195      */ 0,
        /* 196      */ 0,
        /* 197      */ 0,
        /* 198      */ 0,
        /* 199      */ 0,
        /* 200      */ 0,
        /* 201      */ 0,
        /* 202      */ 0,
        /* 203      */ 0,
        /* 204      */ 0,
        /* 205      */ 0,
        /* 206      */ 0,
        /* 207      */ 0,
        /* 208      */ 0,
        /* 209      */ 0,
        /* 210      */ 0,
        /* 211      */ 0,
        /* 212      */ 0,
        /* 213      */ 0,
        /* 214      */ 0,
        /* 215      */ 0,
        /* 216      */ 0,
        /* 217      */ 0,
        /* 218      */ 0,
        /* 219      */ 0,
        /* 220      */ 0,
        /* 221      */ 0,
        /* 222      */ 0,
        /* 223      */ 0,
        /* 224      */ 0,
        /* 225      */ 0,
        /* 226      */ 0,
        /* 227      */ 0,
        /* 228      */ 0,
        /* 229      */ 0,
        /* 230      */ 0,
        /* 231      */ 0,
        /* 232      */ 0,
        /* 233      */ 0,
        /* 234      */ 0,
        /* 235      */ 0,
        /* 236      */ 0,
        /* 237      */ 0,
        /* 238      */ 0,
        /* 239      */ 0,
        /* 240      */ 0,
        /* 241      */ 0,
        /* 242      */ 0,
        /* 243      */ 0,
        /* 244      */ 0,
        /* 245      */ 0,
        /* 246      */ 0,
        /* 247      */ 0,
        /* 248      */ 0,
        /* 249      */ 0,
        /* 250      */ 0,
        /* 251      */ 0,
        /* 252      */ 0,
        /* 253      */ 0,
        /* 254      */ 0,
        /* 255      */ 0
};

#define _isalnum(c)		((__ctype_table[c+1] & (__CTYPE_DIGIT|__CTYPE_LOWER_CASE|__CTYPE_UPPER_CASE)) != 0)
#define _isalpha(c)		((__ctype_table[c+1] & (__CTYPE_LOWER_CASE|__CTYPE_UPPER_CASE)) != 0)
#define _iscntrl(c)		((__ctype_table[c+1] & __CTYPE_CONTROL) != 0)
#define _isdigit(c)		((__ctype_table[c+1] & __CTYPE_DIGIT) != 0)
#define _isxdigit(c)	((__ctype_table[c+1] & __CTYPE_HEX_DIGIT) != 0)
#define _isgraph(c)		((__ctype_table[c+1] & (__CTYPE_DIGIT|__CTYPE_PUNCTUATION|__CTYPE_LOWER_CASE|__CTYPE_UPPER_CASE)) != 0)
#define _ispunct(c)		((__ctype_table[c+1] & __CTYPE_PUNCTUATION) != 0)
#define _isprint(c)		((__ctype_table[c+1] & __CTYPE_PRINTABLE) != 0)
#define _islower(c)		((__ctype_table[c+1] & __CTYPE_LOWER_CASE) != 0)
#define _isupper(c)		((__ctype_table[c+1] & __CTYPE_UPPER_CASE) != 0)
#define _isspace(c)		((__ctype_table[c+1] & __CTYPE_WHITE_SPACE) != 0)


int isalnum(int c) {return _isalnum(c);}
int isalpha(int c) {return _isalpha(c);}
int iscntrl(int c) {return _iscntrl(c);}

int isdigit(int c) {return _isdigit(c);}
int isxdigit(int c) {return _isxdigit(c);}

int isgraph(int c) {return _isgraph(c);}
int ispunct(int c) {return _ispunct(c);}
int isprint(int c) {return _isprint(c);}

int islower(int c) {return _islower(c);}
int isupper(int c) {return _isupper(c);}

int isspace(int c) {return _isspace(c);}

int tolower(int c) {return 1;}
int toupper(int c) {return 1;}

void
__translate_access_io_error_to_errno(LONG io_err,int * errno_ptr);

int __io2errno(int io_err)
{
	int errno;
	__translate_access_io_error_to_errno(io_err,&errno);
	return errno;
}

AMISSL_LIB_ENTRY int VARARGS68K _AmiSSL_BIO_printf(struct AmiSSLIFace *Self, BIO * bio, const char * format, ...)
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

AMISSL_LIB_ENTRY int  VARARGS68K _AmiSSL_BIO_snprintf(struct AmiSSLIFace *Self, char * buf, size_t n, const char * format, ...)
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

AMISSL_LIB_ENTRY void VARARGS68K _AmiSSL_ERR_add_error_data(struct AmiSSLIFace *Self, int num, ...) {}

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




