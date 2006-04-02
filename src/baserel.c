#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/elf.h>

//#define DEBUG
#include <internal/debug.h>

static Elf32_Handle GetCurrentElfHandle(struct DOSIFace *IDOS, struct ElfIFace *IElf)
{
	BPTR seg = IDOS->GetProcSegList(NULL);
	Elf32_Handle handle = NULL;

	if (seg)
	{
		IDOS->GetSegListInfoTags(seg, GSLI_ElfHandle, &handle, TAG_DONE);

		if (handle)
			handle = IElf->OpenElfTags(OET_ElfHandle, handle, TAG_DONE);
	}

	return(handle);
}

static void FreeCurrentElfHandle(struct ElfIFace *IElf, Elf32_Handle handle)
{
	IElf->CloseElfTags(handle, CET_ReClose, TRUE, TAG_DONE);
}

uint8 *GetLibDataSegment(uint32 *offset)
{
	struct Library *DOSBase, *ElfBase;
	struct DOSIFace *IDOS = NULL;
	struct ElfIFace *IElf = NULL;
	uint8 *data = NULL;

	DOSBase = IExec->OpenLibrary("dos.library", 50);

	if (DOSBase)
		IDOS = (struct DOSIFace *)IExec->GetInterface(DOSBase, "main", 1, NULL);

	ElfBase = IExec->OpenLibrary("elf.library", 51);

	/* Versions of elf.library before v51.8 don't have the required functionality */
	if (ElfBase && ElfBase->lib_Version == 51 && ElfBase->lib_Revision < 8)
	{
		kprintf("elf.library is too old\n");
		IExec->CloseLibrary(ElfBase);
		ElfBase = NULL;
	}

	if (ElfBase)
		IElf = (struct ElfIFace *)IExec->GetInterface(ElfBase, "main", 1, NULL);

	if (IDOS && IElf)
	{
		Elf32_Handle handle = GetCurrentElfHandle(IDOS, IElf);

		if (handle)
		{
			data = IElf->CopyDataSegment(handle, offset);
			kprintf("Got a copy of data segment: 0x%08lx (offset: %ld)\n", data, *offset);

			FreeCurrentElfHandle(IElf, handle);
		}
	}

	IExec->DropInterface((struct Interface *)IElf);
	IExec->CloseLibrary(ElfBase);

	IExec->DropInterface((struct Interface *)IDOS);
	IExec->CloseLibrary(DOSBase);

	return(data);
}

void FreeLibDataSegment(uint8 *data)
{
	if (data)
	{
		struct Library *DOSBase = IExec->OpenLibrary("dos.library", 50);
		struct Library *ElfBase = IExec->OpenLibrary("elf.library", 51);
		struct DOSIFace *IDOS = NULL;
		struct ElfIFace *IElf = NULL;

		kprintf("About to free the data segment at 0x%08lx\n", data);

		if (DOSBase)
			IDOS = (struct DOSIFace *)IExec->GetInterface(DOSBase, "main", 1, NULL);

		if (ElfBase)
			IElf = (struct ElfIFace *)IExec->GetInterface(ElfBase, "main", 1, NULL);

		if (IDOS && IElf)
		{
			Elf32_Handle handle = GetCurrentElfHandle(IDOS, IElf);

			if (handle)
			{
				IElf->FreeDataSegmentCopy(handle, data);
				FreeCurrentElfHandle(IElf, handle);
				kprintf("Done\n");
			}
		}

		IExec->DropInterface((struct Interface *)IElf);
		IExec->CloseLibrary(ElfBase);

		IExec->DropInterface((struct Interface *)IDOS);
		IExec->CloseLibrary(DOSBase);
	}
}
