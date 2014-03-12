
STATIC struct Library * stub_OpenPPC(uint32 *regarray)
{
    struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
    struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((uint32)Base + Base->lib_PosSize);
    struct LibraryManagerInterface *Self = (struct LibraryManagerInterface *) ExtLib->ILibrary;

    return Self->Open(0);
}
STATIC CONST struct EmuTrap stub_Open = { TRAPINST, TRAPTYPE, (uint32 (*)(uint32 *))stub_OpenPPC };

STATIC APTR stub_ClosePPC(uint32 *regarray)
{
    struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
    struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((uint32)Base + Base->lib_PosSize);
    struct LibraryManagerInterface *Self = (struct LibraryManagerInterface *) ExtLib->ILibrary;

    return Self->Close();
}
STATIC CONST struct EmuTrap stub_Close = { TRAPINST, TRAPTYPE, (uint32 (*)(uint32 *))stub_ClosePPC };

STATIC APTR stub_ExpungePPC(uint32 *regarray UNUSED)
{
    return NULL;
}
STATIC CONST struct EmuTrap stub_Expunge = { TRAPINST, TRAPTYPE, (uint32 (*)(uint32 *))stub_ExpungePPC };

STATIC uint32 stub_ReservedPPC(uint32 *regarray UNUSED)
{
    return 0;
}
STATIC CONST struct EmuTrap stub_Reserved = { TRAPINST, TRAPTYPE, stub_ReservedPPC };
