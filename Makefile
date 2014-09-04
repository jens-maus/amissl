#/***************************************************************************
#
# AmiSSL - OpenSSL wrapper for AmigaOS-based systems
# Copyright (C) 1999-2006 Andrija Antonijevic, Stefan Burstroem
# Copyright (C) 2006-2014 AmiSSL Open Source Team
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 3 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# AmiSSL Official Support Site :  http://sf.net/p/amissl
#
# $Id$
#
#***************************************************************************/

###########################################################################
# This makefile is a very generic one. It tries to identify both, the host
# and the target operating system for which AmiSSL should be compiled.
# However, this auto-detection can be easily overridden by directly
# specifying an option on the commandline while calling 'make'.
#
# Example:
#
# # to explicitly compile for AmigaOS3
# > make OS=os3
#
# # to compile for AmigaOS4 but without debugging
# > make OS=os4 DEBUG=
#

#############################################
# find out the HOST operating system
# on which this makefile is run
HOST ?= $(shell uname)
ifeq ($(HOST), AmigaOS)
  ifeq ($(shell uname -m), powerpc)
    HOST = AmigaOS4
  endif
  ifeq ($(shell uname -m), ppc)
    HOST = AmigaOS4
  endif
endif

# if no host is identifed (no uname tool)
# we assume a AmigaOS build
ifeq ($(HOST),)
  HOST = AmigaOS
endif

#############################################
# now we find out the target OS for
# which we are going to compile YAM in case
# the caller didn't yet define OS himself
ifndef (OS)
  ifeq ($(HOST), AmigaOS4)
    OS = os4
  else
  ifeq ($(HOST), AmigaOS)
    OS = os3
  else
  ifeq ($(HOST), MorphOS)
    OS = mos
  else
  ifeq ($(HOST), AROS)
    # now we find out which CPU system aros will be used
    ifeq ($(shell uname -m), powerpc)
      OS = aros-ppc
    endif
    ifeq ($(shell uname -m), ppc)
      OS = aros-ppc
    endif
    ifeq ($(shell uname -m), i386)
      OS = aros-i386
    endif
    ifeq ($(shell uname -m), i686)
      OS = aros-i686
    endif
    ifeq ($(shell uname -m), x86_64)
      OS = aros-x86_64
    endif
    ifeq ($(shell uname -m), arm)
      OS = aros-arm
    endif
  else
    OS = os4
  endif
  endif
  endif
  endif
endif

#############################################
# define common commands we use in this
# makefile. Please note that each of them
# might be overridden on the commandline.

# common commands
EXPR    = expr
DATE    = date
RM      = rm -f #delete force
RMDIR   = rm -rf #delete force all
MKDIR   = mkdir -p #makedir force
CHMOD   = protect FLAGS=rwed
SED     = sed
CP      = copy
CC      = gcc
STRIP   = strip
OBJDUMP = objdump

# path definitions
CDUP  = /
CDTHIS=

# override some variables for non-native builds (cross-compiler)
ifneq ($(HOST), AmigaOS)
ifneq ($(HOST), AmigaOS4)
ifneq ($(HOST), MorphOS)

  # when we end up here this is either a unix or Aros host
  # so lets use unix kind of commands
  RM      = rm -f
  RMDIR   = rm -rf
  MKDIR   = mkdir -p
  CHMOD   = chmod 755
  CP      = cp -f

  CDUP  = ../
  CDTHIS= ./

endif
endif
endif

###########################################################################
# CPU and DEBUG can be defined outside, defaults to above
# using e.g. "make DEBUG= CPU=-mcpu=603e" produces optimized non-debug
# PPC-603e version
#
# OPTFLAGS are disabled by DEBUG normally!
#
# ignored warnings are:
# none - because we want to compile with -Wall all the time

VERSION=3
VERSIONNAME=101i
AMISSLREVISION=8
AMISSLMASTERREVISION=8
AMISSLDATE=17.08.2014
AMISSLMASTERDATE=17.08.2014

# Common Directories
PREFIX    = $(CDTHIS)
OBJ_D     = $(PREFIX).obj_$(OS)
BIN_D     = $(PREFIX)bin_$(OS)
SRC_D     = $(PREFIX)src
VPATH     = $(OBJ_D)
GCCVER    = 4

# Common compiler/linker flags
WARN     = -W -Wall -Wwrite-strings -Wpointer-arith -Wsign-compare #-Wunreachable-code
OPTFLAGS = -O3 -fomit-frame-pointer
DEBUG    = -DDEBUG -fno-omit-frame-pointer #-O0
DEBUGSYM = -g -gstabs
INCLUDE  = -I./include -I./libcmt/include
CFLAGS   = $(CPU) -DAMISSL -DAMISSL_COMPILE \
           -DVERSION=$(VERSION) -DVERSIONNAME=$(VERSIONNAME) \
           -DAMISSLREVISION=$(AMISSLREVISION) -DAMISSLDATE=$(AMISSLDATE) \
           -DAMISSLMASTERREVISION=$(AMISSLMASTERREVISION) \
           -DAMISSLMASTERDATE=$(AMISSLMASTERDATE) -DLIBCPU=$(OS) \
           $(WARN) $(OPTFLAGS) $(DEBUG) $(DEBUGSYM) $(INCLUDE)
LDFLAGS  = $(CPU) $(DEBUGSYM) -nostdlib -mbaserel
LIBSSL   = $(BIN_D)/openssl/libssl.a
LIBCRYPTO= $(BIN_D)/openssl/libcrypto.a
LIBCMT   = $(BIN_D)/libcmt.a

# different options per target OS
ifeq ($(OS), os4)

  ##############################
  # AmigaOS4

  # Compiler/link/strip commands
  ifneq ($(HOST), AmigaOS4)
    CC      = ppc-amigaos-gcc-4.0.3
    STRIP   = ppc-amigaos-strip
    OBJDUMP = ppc-amigaos-objdump
    AR      = ppc-amigaos-ar
    RANLIB  = ppc-amigaos-ranlib
  endif

  # Compiler/Linker flags
  CRT      = clib2
  CPU      = -mcpu=powerpc -mstrict-align
  WARN     += -Wdeclaration-after-statement -Wdisabled-optimization -Wshadow
  CFLAGS   += -mbaserel -mcrt=$(CRT) -D__USE_INLINE__ -D__NEW_TIMEVAL_DEFINITION_USED__ -Wa,-mregnames
  LDFLAGS  += -mcrt=$(CRT)
  CDUP     = ../
  CDTHIS   = ./

  OPENSSL_T = OS4

  EXTRAOBJS = $(OBJ_D)/amissl_library_os4.o \
              $(OBJ_D)/amissl_glue.o \
              $(OBJ_D)/amissl_m68k.o

else
ifeq ($(OS), os3)

  ##############################
  # AmigaOS3

  # Compiler/link/strip commands
  ifneq ($(HOST), AmigaOS)
    CC      = m68k-amigaos-gcc
    STRIP   = m68k-amigaos-strip
    OBJDUMP = m68k-amigaos-objdump
    AR      = m68k-amigaos-ar
    RANLIB  = m68k-amigaos-ranlib
  endif

  # Compiler/Linker flags
  CPU     = -m68020-60 -msoft-float
  CFLAGS  += -I./include/netinclude -DNO_INLINE_STDARG -D__amigaos3__
  LDFLAGS += -noixemul
  LDLIBS  += -ldebug -lm
  GCCVER  = 2

  OPENSSL_T = OS3

else
ifeq ($(OS), mos)

  ##############################
  # MorphOS

  # Compiler/link/strip commands
  ifneq ($(HOST), MorphOS)
    CC      = ppc-morphos-gcc
    STRIP   = ppc-morphos-strip
    OBJDUMP = ppc-morphos-objdump
    AR      = ppc-morphos-ar
    RANLIB  = ppc-morphos-ranlib
  endif

  # Compiler/Linker flags
  CPU     = -mcpu=powerpc
  CFLAGS  += -noixemul -I./include/netinclude
  LDFLAGS += -noixemul
  LDLIBS  +=
  GCCVER  = 2

else
ifeq ($(OS), aros-i386)

  ##############################
  # AROS (i386)

  ifneq ($(HOST), AROS)
    CC      = i386-aros-gcc
    STRIP   = i386-aros-strip
    OBJDUMP = i386-aros-objdump
    AR      = i386-aros-ar
    RANLIB  = i386-aros-ranlib
  endif

  # Compiler/Linker flags
  OPTFLAGS = -O3 -fomit-frame-pointer
  CFLAGS += -Wno-pointer-sign -DNO_INLINE_STDARG -D__BSD_VISIBLE=1
  LDLIBS += -lamiga -larossupport -larosc

else
ifeq ($(OS), aros-ppc)

  ##############################
  # AROS (PPC)

  ifneq ($(HOST), AROS)
    CC      = ppc-aros-gcc
    STRIP   = ppc-aros-strip
    OBJDUMP = ppc-aros-objdump
    AR      = ppc-aros-ar
    RANLIB  = ppc-aros-ranlib
  endif

  # Compiler/Linker flags
  OPTFLAGS = -O3 -fomit-frame-pointer
  CFLAGS += -Wno-pointer-sign -DNO_INLINE_STDARG -D__BSD_VISIBLE=1
  LDLIBS += -lamiga -larossupport -larosc

else
ifeq ($(OS), aros-x86_64)

  ##############################
  # AROS (x86_64)

  ifneq ($(HOST), AROS)
    CC      = x86_64-aros-gcc
    STRIP   = x86_64-aros-strip
    OBJDUMP = x86_64-aros-objdump
    AR      = x86_64-aros-ar
    RANLIB  = x86_64-aros-ranlib
  endif

  # Compiler/Linker flags
  OPTFLAGS = -O3 -fomit-frame-pointer
  CFLAGS += -Wno-pointer-sign -DNO_INLINE_STDARG -D__BSD_VISIBLE=1
  LDLIBS += -lamiga -larossupport -larosc

else
ifeq ($(OS), aros-arm)

  ##############################
  # AROS (x86_64)

  ifneq ($(HOST), AROS)
    CC      = arm-aros-gcc
    STRIP   = arm-aros-strip
    OBJDUMP = arm-aros-objdump
    AR      = arm-aros-ar
    RANLIB  = arm-aros-ranlib
  endif

  # Compiler/Linker flags
  OPTFLAGS = -O3 -fomit-frame-pointer
  CFLAGS += -Wno-pointer-sign -DNO_INLINE_STDARG -D__BSD_VISIBLE=1
  LDLIBS += -lamiga -larossupport -larosc

endif
endif
endif
endif
endif
endif
endif

###########################################################################
# Here starts all stuff that is common for all target platforms and
# hosts.

OBJS = $(OBJ_D)/amissl_library.o \
       $(EXTRAOBJS)

LIBS = $(LIBSSL) $(LIBCRYPTO) $(LIBCMT)

# main target
.PHONY: all
all: $(OBJ_D) $(BIN_D) $(BIN_D)/libamisslauto.a $(BIN_D)/libamisslstubs.a $(BIN_D)/amissl_v$(VERSIONNAME).library $(BIN_D)/amisslmaster.library

# make the object directory
$(OBJ_D):
	@echo "  MK $@"
	@$(MKDIR) $@

$(OBJ_D)/openssl:
	@echo "  MK $@"
	@$(MKDIR) $@

$(OBJ_D)/libcmt:
	@echo "  MK $@"
	@$(MKDIR) $@

# make the bin directory
$(BIN_D):
	@echo "  MK $@"
	@$(MKDIR) $@

$(BIN_D)/openssl:
	@echo "  MK $@"
	@$(MKDIR) $@

# for compiling single .c files
$(OBJ_D)/%.o: $(SRC_D)/%.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) -c $< -o $@

## OPENSSL BUILD RULES ##

openssl/Makefile:
	@(cd openssl; perl Configure $(OPENSSL_T) enable-mdc2 enable-md2 enable-rc5 no-krb5)

openssl/MINFO: openssl/Makefile
	@(cd openssl; make files)

$(OBJ_D)/openssl/Makefile.ossl: openssl/MINFO $(OBJ_D)/openssl $(BIN_D)/openssl
	@(cd openssl; perl util/mk1mf.pl SRC= TMP=../$(OBJ_D)/openssl OUT=../$(BIN_D)/openssl $(OPENSSL_T) > ../$(OBJ_D)/Makefile.ossl)

$(OBJ_D)/openssl/outinc: $(OBJ_D)/openssl/Makefile.ossl
	@make -C openssl -f ../$(OBJ_D)/Makefile.ossl AmiSSL=.. CC=$(CC) outinc outinc/openssl headers
	@sh tools/cpheaders.sh

$(LIBCRYPTO): $(OBJ_D)/openssl/outinc
	@make -C openssl -f ../$(OBJ_D)/Makefile.ossl AmiSSL=.. CC=$(CC)

$(LIBSSL): $(LIBCRYPTO)

## LIBCMT BUILD RULES ##

$(LIBCMT): $(OBJ_D)/libcmt
	@make -C libcmt AmiSSL=.. CC=$(CC) AR=$(AR) RANLIB=$(RANLIB) OS=$(OS)

## AMISSL BUILD RULES ##

$(BIN_D)/amissl_v$(VERSIONNAME).library: $(OBJS) $(LIBCMT) $(LIBSSL) $(LIBCRYPTO)
	@echo "  LD $@"
	@$(CC) -o $@ $(LDFLAGS) $(OBJS) $(LIBS) $(LDLIBS) -Wl,-M,-Map=$@.map

$(BIN_D)/amisslmaster.library: $(OBJ_D)/amisslmaster_library_os4.o $(OBJ_D)/amisslmaster_library.o $(OBJ_D)/amisslmaster_m68k.o
	@echo "  LD $@"
	@$(CC) -o $@ $(LDFLAGS) $(OBJ_D)/amisslmaster_library_os4.o $(OBJ_D)/amisslmaster_m68k.o $(OBJ_D)/amisslmaster_library.o -Wl,-M,-Map=$@.map

$(BIN_D)/libamisslauto.a: $(OBJ_D)/autoinit_amissl_main.o
	@echo "  AR $@"
	@$(AR) r $@ $(OBJ_D)/autoinit_amissl_main.o
	@$(RANLIB) $@

$(BIN_D)/libamisslstubs.a: $(OBJ_D)/libstubs.o
	@echo "  AR $@"
	@$(AR) r $@ $(OBJ_D)/libstubs.o
	@$(RANLIB) $@

$(OBJ_D)/autoinit_amissl_main.o: $(SRC_D)/autoinit_amissl_main.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) -c $< -o $@ -DVERSION=$(VERSION) $(INCLUDE)

$(OBJ_D)/libstubs.o: $(SRC_D)/libstubs.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) -c $< -o $@ -DAMISSL $(INCLUDE)

$(OBJ_D)/amissl_library_os4.o: $(SRC_D)/amissl_library_os4.c $(SRC_D)/amissl_vectors.c
$(OBJ_D)/amissl_glue.o: CFLAGS += -Wno-unused-parameter
$(OBJ_D)/amissl_glue.o: $(SRC_D)/amissl_glue.c
$(OBJ_D)/amissl_library.o: $(SRC_D)/amissl_library.c
$(OBJ_D)/amissl_m68k.o: $(SRC_D)/amissl_m68k.c
$(OBJ_D)/amisslmaster_library.o: $(SRC_D)/amisslmaster_library.c
$(OBJ_D)/amisslmaster_library_os4.o: $(SRC_D)/amisslmaster_library_os4.c $(SRC_D)/amisslmaster_vectors.c
$(OBJ_D)/amisslmaster_m68k.o: $(SRC_D)/amisslmaster_m68k.c

# cleanup target
.PHONY: clean
clean:
	-rm -f $(OBJ_D)/*.o $(BIN_D)/*.a
	-rm -f $(BIN_D)/amissl_v$(VERSIONNAME).library*
	-rm -f $(BIN_D)/amisslmaster.library*
	-rm -rf $(BIN_D)/openssl $(OBJ_D)/openssl
	-rm -rf $(BIN_D)/libcmt.a $(OBJ_D)/libcmt

# distclean target
.PHONY: distclean
distclean: clean
	-rm -f openssl/MINFO
	-rm -f openssl/Makefile
	-rm -f openssl/crypto/opensslconf.h
	-rm -f openssl/openssl.pc
	-rm -f openssl/crypto/buildinf.h
	-rm -rf openssl/outinc
	-rm -rf $(OBJ_D) $(BIN_D)
	-rm -rf *.library *.map

testing:
	@echo "  LD $<"
	@$(CC) basereltest.c -o basereltest -mbaserel -Wl,-M,-Map=$@.map -nostdlib

tests:
	@make -C openssl -f ../$(OBJ_D)/Makefile.ossl AmiSSL=.. exe
