#ifndef AMISSLMASTER_INTERFACE_DEF_H
#define AMISSLMASTER_INTERFACE_DEF_H
/*
** This file is machine generated from idltool
** Do not edit
*/ 

#include <exec/types.i>
#include <exec/exec.i>
#include <exec/interfaces.i>

STRUCTURE AmiSSLMasterIFace, InterfaceData_SIZE
	    FPTR IAmiSSLMaster_Obtain
	    FPTR IAmiSSLMaster_Release
	    FPTR AmiSSLMasterIFace_Expunge_UNIMPLEMENTED
	    FPTR AmiSSLMasterIFace_Clone_UNIMPLEMENTED
	    FPTR IAmiSSLMaster_InitAmiSSLMaster
	    FPTR IAmiSSLMaster_OpenAmiSSL
	    FPTR IAmiSSLMaster_CloseAmiSSL
	    FPTR IAmiSSLMaster_OpenAmiSSLCipher
	    FPTR IAmiSSLMaster_CloseAmiSSLCipher
	LABEL AmiSSLMasterIFace_SIZE

#endif
