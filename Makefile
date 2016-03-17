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

VERSION=4
VERSIONNAME=110-pre3
AMISSLREVISION=0
AMISSLMASTERREVISION=0
AMISSLDATE=15.02.2016
AMISSLMASTERDATE=15.02.2016

# Common Directories
PREFIX    = $(CDTHIS)
OBJ_D     = $(PREFIX).obj_$(OS)
BIN_D     = $(PREFIX)bin_$(OS)
SRC_D     = $(PREFIX)src
TEST_D    = $(PREFIX)test
VPATH     = $(OBJ_D)
GCCVER    = 4

# Common compiler/linker flags
WARN     = -W -Wall -Wwrite-strings -Wpointer-arith -Wsign-compare #-Wunreachable-code
OPTFLAGS = -O3 -fomit-frame-pointer
DEBUG    = -DDEBUG -fno-omit-frame-pointer $(DEBUGSYM)
DEBUGSYM = -g -gstabs
INCLUDE  = -I./include
APPCFLAGS= $(CPU) $(WARN) $(OPTFLAGS) $(DEBUG) $(INCLUDE)
CFLAGS   = $(APPCFLAGS) $(BASEREL) -DAMISSL -DAMISSL_COMPILE -DBASEREL \
           -DVERSION=$(VERSION) -DVERSIONNAME=$(VERSIONNAME) \
           -DAMISSLREVISION=$(AMISSLREVISION) -DAMISSLDATE=$(AMISSLDATE) \
           -DAMISSLMASTERREVISION=$(AMISSLMASTERREVISION) \
           -DAMISSLMASTERDATE=$(AMISSLMASTERDATE) -DLIBCPU=$(OS)
LDFLAGS  = $(CPU) $(BASEREL) $(DEBUGSYM) -nostdlib
LIBSSL   = $(BIN_D)/openssl/libssl.a
LIBCRYPTO= $(BIN_D)/openssl/libcrypto.a
LIBCMT   = $(BIN_D)/libcmt.a

# different options per target OS
ifeq ($(OS), os4)

  ##############################
  # AmigaOS4

  # the OpenSSL target definition to use
  OPENSSL_T = amiga-os4

  # Compiler/link/strip commands
  ifneq ($(HOST), AmigaOS4)
    CROSS_PREFIX = ppc-amigaos-
    CC      = $(CROSS_PREFIX)gcc-4.0.3
    STRIP   = $(CROSS_PREFIX)strip
    OBJDUMP = $(CROSS_PREFIX)objdump
    AR      = $(CROSS_PREFIX)ar
    RANLIB  = $(CROSS_PREFIX)ranlib
  endif

  # Compiler/Linker flags
  CRT       = clib2
  CPU       = -mcpu=powerpc -mstrict-align
  WARN      += -Wdeclaration-after-statement -Wdisabled-optimization -Wshadow
  APPCFLAGS += -mcrt=$(CRT) -D__USE_INLINE__ -D__NEW_TIMEVAL_DEFINITION_USED__ -Wa,-mregnames
  CFLAGS    += -mcrt=$(CRT) -DMULTIBASE -D__USE_INLINE__ -D__NEW_TIMEVAL_DEFINITION_USED__ -Wa,-mregnames
  LDFLAGS   += -mcrt=$(CRT)
  BASEREL   = -mbaserel
  NOBASEREL = -mno-baserel
  CDUP      = ../
  CDTHIS    = ./

  EXTRALIBOBJS = $(OBJ_D)/amissl_library_os4.o \
                 $(OBJ_D)/amissl_glue.o \
                 $(OBJ_D)/amissl_m68k.o

  EXTRAMASTEROBJS = $(OBJ_D)/amisslmaster_m68k.o

else
ifeq ($(OS), os3)

  ##############################
  # AmigaOS3

  # the OpenSSL target definition to use
  OPENSSL_T = amiga-os3

  # Compiler/link/strip commands
  ifneq ($(HOST), AmigaOS)
    CROSS_PREFIX = m68k-amigaos-
    CC      = $(CROSS_PREFIX)gcc
    STRIP   = $(CROSS_PREFIX)strip
    OBJDUMP = $(CROSS_PREFIX)objdump
    AR      = $(CROSS_PREFIX)ar
    RANLIB  = $(CROSS_PREFIX)ranlib
  endif

  # Compiler/Linker flags
  CPU       = -m68020-60 -msoft-float
  APPCFLAGS += -I./include/netinclude -DNO_INLINE_STDARG -D__amigaos3__
  CFLAGS    += -DMULTIBASE -DBASEREL -I./include/netinclude -DNO_INLINE_STDARG -D__amigaos3__
  LDFLAGS   += -noixemul
  LDLIBS    += -ldebug -lc -lm -lgcc -lamiga
  BASEREL   = -resident32
  NOBASEREL = -fno-baserel
  BRELLIB   = -mrestore-a4
  GCCVER    = 2

  EXTRALIBOBJS = $(OBJ_D)/amissl_glue.o

else
ifeq ($(OS), mos)

  ##############################
  # MorphOS

  # the OpenSSL target definition to use
  OPENSSL_T = amiga-mos

  # Compiler/link/strip commands
  ifneq ($(HOST), MorphOS)
    CROSS_PREFIX = ppc-morphos-
    CC      = $(CROSS_PREFIX)gcc
    STRIP   = $(CROSS_PREFIX)strip
    OBJDUMP = $(CROSS_PREFIX)objdump
    AR      = $(CROSS_PREFIX)ar
    RANLIB  = $(CROSS_PREFIX)ranlib
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

  # the OpenSSL target definition to use
  OPENSSL_T = amiga-aros-i386

  ifneq ($(HOST), AROS)
    CROSS_PREFIX = i386-aros-
    CC      = $(CROSS_PREFIX)gcc
    STRIP   = $(CROSS_PREFIX)strip
    OBJDUMP = $(CROSS_PREFIX)objdump
    AR      = $(CROSS_PREFIX)ar
    RANLIB  = $(CROSS_PREFIX)ranlib
  endif

  # Compiler/Linker flags
  CFLAGS += -Wno-pointer-sign -DNO_INLINE_STDARG -D__BSD_VISIBLE=1
  LDLIBS += -lamiga -larossupport -larosc

else
ifeq ($(OS), aros-ppc)

  ##############################
  # AROS (PPC)

  # the OpenSSL target definition to use
  OPENSSL_T = amiga-aros-ppc

  ifneq ($(HOST), AROS)
    CROSS_PREFIX = ppc-aros-
    CC      = $(CROSS_PREFIX)gcc
    STRIP   = $(CROSS_PREFIX)strip
    OBJDUMP = $(CROSS_PREFIX)objdump
    AR      = $(CROSS_PREFIX)ar
    RANLIB  = $(CROSS_PREFIX)ranlib
  endif

  # Compiler/Linker flags
  CFLAGS += -Wno-pointer-sign -DNO_INLINE_STDARG -D__BSD_VISIBLE=1
  LDLIBS += -lamiga -larossupport -larosc

else
ifeq ($(OS), aros-x86_64)

  ##############################
  # AROS (x86_64)

  # the OpenSSL target definition to use
  OPENSSL_T = amiga-aros-x86_64

  ifneq ($(HOST), AROS)
    CROSS_PREFIX = x86_64-aros-
    CC      = $(CROSS_PREFIX)gcc
    STRIP   = $(CROSS_PREFIX)strip
    OBJDUMP = $(CROSS_PREFIX)objdump
    AR      = $(CROSS_PREFIX)ar
    RANLIB  = $(CROSS_PREFIX)ranlib
  endif

  # Compiler/Linker flags
  CFLAGS += -Wno-pointer-sign -DNO_INLINE_STDARG -D__BSD_VISIBLE=1
  LDLIBS += -lamiga -larossupport -larosc

else
ifeq ($(OS), aros-arm)

  ##############################
  # AROS (arm)

  # the OpenSSL target definition to use
  OPENSSL_T = amiga-aros-arm

  ifneq ($(HOST), AROS)
    CROSS_PREFIX = arm-aros-
    CC      = $(CROSS_PREFIX)gcc
    STRIP   = $(CROSS_PREFIX)strip
    OBJDUMP = $(CROSS_PREFIX)objdump
    AR      = $(CROSS_PREFIX)ar
    RANLIB  = $(CROSS_PREFIX)ranlib
  endif

  # Compiler/Linker flags
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

LIBOBJS = $(OBJ_D)/amissl_libinit.o \
          $(OBJ_D)/amissl_library.o \
          $(OBJ_D)/amissl_norestore.o \
          $(OBJ_D)/amissl_init.o \
          $(OBJ_D)/debug.o \
          $(EXTRALIBOBJS)

MASTEROBJS = $(OBJ_D)/amisslmaster_libinit.o \
             $(OBJ_D)/amisslmaster_library.o \
             $(OBJ_D)/amisslmaster_init.o \
             $(OBJ_D)/debug.o \
             $(EXTRAMASTEROBJS)

LIBS = -L$(BIN_D)/openssl $(LIBSSL) $(LIBCRYPTO) $(LIBCMT) -lgcc

# main target
.PHONY: all
all: $(OBJ_D) $(BIN_D) $(BIN_D)/libamisslauto.a $(BIN_D)/libamisslstubs.a $(LIBCRYPTO) $(LIBSSL) $(BIN_D)/amissl_v$(VERSIONNAME).library $(BIN_D)/amissl_v$(VERSIONNAME)_test $(BIN_D)/amisslmaster.library $(BIN_D)/amisslmaster_test $(BIN_D)/https $(BIN_D)/uitest $(BIN_D)/vatest

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
	@(cd openssl; CROSS_COMPILE=$(CROSS_PREFIX) perl Configure $(OPENSSL_T) enable-mdc2 enable-md2 enable-rc5 enable-rsa no-asm --openssldir=AmiSSL: $(DEBUG))

openssl/MINFO: openssl/Makefile
	@(cd openssl; $(MAKE) files)

$(OBJ_D)/openssl/Makefile.ossl: openssl/MINFO $(OBJ_D)/openssl $(BIN_D)/openssl
	@(cd openssl; perl util/mk1mf.pl SRC=. TMP=../$(OBJ_D)/openssl OUT=../$(BIN_D)/openssl INC=../$(OBJ_D)/openssl/include $(OPENSSL_T) > ../$(OBJ_D)/Makefile.ossl)

$(OBJ_D)/openssl/include: $(OBJ_D)/openssl/Makefile.ossl
	@$(MKDIR) $(OBJ_D)/openssl/include
	@$(MAKE) -C openssl -f ../$(OBJ_D)/Makefile.ossl INCL_D=../$(OBJ_D)/openssl/include AmiSSL=.. CC=$(CC) init
	@sh tools/cpheaders.sh $(OBJ_D)

$(LIBCRYPTO): $(OBJ_D)/openssl/include
	$(MAKE) -C openssl -f ../$(OBJ_D)/Makefile.ossl INCL_D=../$(OBJ_D)/openssl/include AmiSSL=.. CC=$(CC) APP_CFLAGS="\$$(CFLAG) \$$(APP_CFLAG)" all

$(LIBSSL): $(LIBCRYPTO)

## LIBCMT BUILD RULES ##

$(LIBCMT): $(OBJ_D)/libcmt
	@$(MAKE) -C libcmt AmiSSL=.. CC=$(CC) AR=$(AR) RANLIB=$(RANLIB) OS=$(OS)

## AMISSL BUILD RULES ##

$(BIN_D)/amissl_v$(VERSIONNAME).library: $(LIBOBJS) $(LIBCMT) $(LIBSSL) $(LIBCRYPTO)
	@echo "  LD $@"
	@$(CC) -o $@ $(LDFLAGS) $(LIBOBJS) $(LIBS) $(LDLIBS) $(LIBS) -Wl,-M,-Map=$@.map

$(BIN_D)/amisslmaster.library: $(MASTEROBJS) $(LIBCMT)
	@echo "  LD $@"
	@$(CC) -o $@ $(LDFLAGS) $(MASTEROBJS) $(LDLIBS) $(LIBCMT) -Wl,-M,-Map=$@.map

$(BIN_D)/libamisslauto.a: $(OBJ_D)/autoinit_amissl_main.o
	@echo "  AR $@"
	@$(AR) r $@ $(OBJ_D)/autoinit_amissl_main.o
	@$(RANLIB) $@

$(BIN_D)/libamisslstubs.a: $(OBJ_D)/libstubs.o
	@echo "  AR $@"
	@$(AR) r $@ $(OBJ_D)/libstubs.o
	@$(RANLIB) $@

## AMISSL TESTCASE BINARIES ##

$(BIN_D)/amisslmaster_test: $(TEST_D)/amisslmaster_test.c
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -o $@ $^

$(BIN_D)/amissl_v$(VERSIONNAME)_test: $(TEST_D)/amissl_test.c
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -o $@ -DVERSIONNAME=$(VERSIONNAME) $^

$(BIN_D)/https: $(TEST_D)/https.c $(BIN_D)/libamisslauto.a $(BIN_D)/libamisslstubs.a
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -o $@ $^ -L$(BIN_D) -lamisslauto -lamisslstubs

$(BIN_D)/uitest: $(TEST_D)/uitest.c $(BIN_D)/libamisslauto.a $(BIN_D)/libamisslstubs.a
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -o $@ $^ -L$(BIN_D) -lamisslauto -lamisslstubs

$(BIN_D)/vatest: $(TEST_D)/vatest.c $(BIN_D)/libamisslauto.a $(BIN_D)/libamisslstubs.a
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -o $@ $^ -L$(BIN_D) -lamisslauto -lamisslstubs

## SOURCES COMPILED WITHOUT BASEREL SUPPORT ##

$(OBJ_D)/autoinit_amissl_main.o: $(SRC_D)/autoinit_amissl_main.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) $(NOBASEREL) -c $< -o $@ -DVERSION=$(VERSION) $(INCLUDE)

$(OBJ_D)/libstubs.o: $(SRC_D)/libstubs.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) $(NOBASEREL) -c $< -o $@ -DAMISSL $(INCLUDE)

$(OBJ_D)/debug.o: $(SRC_D)/debug.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) $(NOBASEREL) -c $< -o $@

## SOURCES COMPILED WITH restore-a4 ##

$(OBJ_D)/amisslmaster_library.o: $(SRC_D)/amisslmaster_library.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) $(BRELLIB) -c $< -o $@

$(OBJ_D)/amissl_library.o: $(SRC_D)/amissl_library.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) $(BRELLIB) -c $< -o $@

$(OBJ_D)/amissl_glue.o: $(SRC_D)/amissl_glue.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) -Wno-deprecated-declarations $(BRELLIB) -c $< -o $@

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
	-rm -rf $(OBJ_D) $(BIN_D)
	-rm -rf *.library *.map

# for creating a .dump file
.PHONY: dump
dump:
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BIN_D)/amisslmaster.library > $(BIN_D)/amisslmaster.library.dump
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BIN_D)/amissl_v$(VERSIONNAME).library > $(BIN_D)/amissl_v$(VERSIONNAME).library.dump
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BIN_D)/https > $(BIN_D)/https.dump
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BIN_D)/uitest > $(BIN_D)/uitest.dump
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BIN_D)/vatest > $(BIN_D)/vatest.dump

testing:
	@echo "  LD $<"
	@$(CC) basereltest.c -o basereltest -mbaserel -Wl,-M,-Map=$@.map -nostdlib

tests:
	@$(MAKE) -C openssl -f ../$(OBJ_D)/Makefile.ossl AmiSSL=.. exe
