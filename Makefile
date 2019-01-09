#/***************************************************************************
#
# AmiSSL - OpenSSL wrapper for AmigaOS-based systems
# Copyright (C) 1999-2006 Andrija Antonijevic, Stefan Burstroem
# Copyright (C) 2006-2016 AmiSSL Open Source Team
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
# AmiSSL Official Support Site :  https://github.com/jens-maus/amissl
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
CC      = $(CROSS_PREFIX)gcc
STRIP   = $(CROSS_PREFIX)strip
OBJDUMP = $(CROSS_PREFIX)objdump
AR      = $(CROSS_PREFIX)ar
RANLIB  = $(CROSS_PREFIX)ranlib

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
VERSIONNAME=111a
AMISSLREVISION=3
AMISSLMASTERREVISION=3
AMISSLDATE=20.11.2018
AMISSLMASTERDATE=20.11.2018

# Common Directories
PREFIX    = $(CDTHIS)
BUILD_D   = $(PREFIX)build_$(OS)
SRC_D     = $(PREFIX)src
TEST_D    = $(PREFIX)test
VPATH     = $(BUILD_D)
GCCVER    = 4

# Common compiler/linker flags
WARN     = -W -Wall -Wwrite-strings -Wpointer-arith -Wsign-compare #-Wunreachable-code
OPTFLAGS = -O3 -fomit-frame-pointer
DEBUG    = -DDEBUG -fno-omit-frame-pointer $(DEBUGSYM)
DEBUGSYM = -g -gstabs
INCLUDE  = -I./include -I$(BUILD_D)/openssl/include -I./include/internal
APPCFLAGS= $(CPU) $(WARN) $(OPTFLAGS) $(DEBUG) $(INCLUDE)
CFLAGS   = $(APPCFLAGS) $(BASEREL) -DAMISSL -DAMISSL_COMPILE -DBASEREL \
           -DVERSION=$(VERSION) -DVERSIONNAME=$(VERSIONNAME) \
           -DAMISSLREVISION=$(AMISSLREVISION) -DAMISSLDATE=$(AMISSLDATE) \
           -DAMISSLMASTERREVISION=$(AMISSLMASTERREVISION) \
           -DAMISSLMASTERDATE=$(AMISSLMASTERDATE) -DLIBCPU=$(OS)
LDFLAGS  = $(CPU) $(BASEREL) $(DEBUGSYM) -nostdlib
LIBSSL   = $(BUILD_D)/openssl/libssl.a
LIBCRYPTO= $(BUILD_D)/openssl/libcrypto.a
LIBCMT   = $(BUILD_D)/libcmt/libcmt.a

# different options per target OS
ifeq ($(OS), os4)

  ##############################
  # AmigaOS4

  # the OpenSSL target definition to use
  OPENSSL_T = amiga-os4

  # Compiler/link/strip commands
  ifneq ($(HOST), AmigaOS4)
    CROSS_PREFIX = ppc-amigaos-
  endif

  # force to use GCC 4.0.4 which is the only latest GCC version with
  # working baserel support.
  CC = $(CROSS_PREFIX)gcc-4.0.4

  # Compiler/Linker flags
  CRT       = clib2
  CPU       = -mcpu=powerpc -mstrict-align
  WARN      += -Wdeclaration-after-statement -Wdisabled-optimization -Wshadow
  APPCFLAGS += -mcrt=$(CRT) -D__USE_INLINE__ -D__NEW_TIMEVAL_DEFINITION_USED__ -Wa,-mregnames
  CFLAGS    += -mcrt=$(CRT) -DMULTIBASE -D__USE_INLINE__ -D__NEW_TIMEVAL_DEFINITION_USED__ -D__C_MACROS__ -Wa,-mregnames
  LDFLAGS   += -mcrt=$(CRT)
  BASEREL   = -mbaserel
  NOBASEREL = -mno-baserel

  EXTRALIBOBJS = $(BUILD_D)/amissl_library_os4.o \
                 $(BUILD_D)/amissl_glue.o \
                 $(BUILD_D)/amissl_m68k.o

  EXTRAMASTEROBJS = $(BUILD_D)/amisslmaster_m68k.o

  EXTRALINKLIBS = $(BUILD_D)/libamisslauto_newlib.a

else
ifeq ($(OS), os3)

  ##############################
  # AmigaOS3

  # the OpenSSL target definition to use
  OPENSSL_T = amiga-os3

  # Compiler/link/strip commands
  ifneq ($(HOST), AmigaOS)
    CROSS_PREFIX = m68k-amigaos-
  endif

  # Compiler/Linker flags
  CPU       = -m68020-60
  APPCFLAGS += -mcrt=clib2 -I./include/netinclude -DNO_INLINE_VARARGS -D__amigaos3__
  CFLAGS    += -mcrt=clib2 -DMULTIBASE -DBASEREL -I./include/netinclude -DNO_INLINE_STDARG -D__amigaos3__
  LDFLAGS   += -mcrt=clib2
  LDLIBS    += -ldebug -lc -lm -lgcc -lamiga
  BASEREL   = -resident32
  NOBASEREL = -fno-baserel
  BRELLIB   = -mrestore-a4
  GCCVER    = 2

  EXTRALIBOBJS = $(BUILD_D)/amissl_glue.o

else
ifeq ($(OS), mos)

  ##############################
  # MorphOS

  # the OpenSSL target definition to use
  OPENSSL_T = amiga-mos

  # Compiler/link/strip commands
  ifneq ($(HOST), MorphOS)
    CROSS_PREFIX = ppc-morphos-
  endif

  # Compiler/Linker flags
  CPU       = -mcpu=powerpc -mstrict-align
  APPCFLAGS += -noixemul -I./include/netinclude -DNO_INLINE_VARARGS -D__MORPHOS__
  CFLAGS    += -noixemul -DMULTIBASE -DBASEREL -noixemul -I./include/netinclude -DNO_INLINE_STDARG -D__MORPHOS__
  LDFLAGS   += -noixemul
  LDLIBS    += -ldebug -lm -lgcc -labox -laboxstubs
  BASEREL   = -mresident32
  NOBASEREL = #-mno-baserel
  BRELLIB   = #-mrestore-a4

  EXTRALIBOBJS = $(BUILD_D)/amissl_stubs_mos.o \
                 $(BUILD_D)/amissl_glue.o

  EXTRAMASTEROBJS = $(BUILD_D)/amisslmaster_stubs_mos.o

else
ifeq ($(OS), aros-i386)

  ##############################
  # AROS (i386)

  # the OpenSSL target definition to use
  OPENSSL_T = amiga-aros-i386

  ifneq ($(HOST), AROS)
    CROSS_PREFIX = i386-aros-
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

LIBOBJS = $(BUILD_D)/amissl_libinit.o \
          $(BUILD_D)/amissl_library.o \
          $(BUILD_D)/amissl_norestore.o \
          $(BUILD_D)/amissl_init.o \
          $(BUILD_D)/debug.o \
          $(EXTRALIBOBJS)

MASTEROBJS = $(BUILD_D)/amisslmaster_libinit.o \
             $(BUILD_D)/amisslmaster_library.o \
             $(BUILD_D)/amisslmaster_init.o \
             $(BUILD_D)/debug.o \
             $(EXTRAMASTEROBJS)

LINKLIBS = $(BUILD_D)/libamisslauto.a \
           $(BUILD_D)/libamisslstubs.a \
           $(BUILD_D)/libamissldebug.a \
           $(EXTRALINKLIBS)

LIBS = -L$(BUILD_D) $(LIBSSL) $(LIBCRYPTO) $(LIBCMT) -lgcc

# main target
.PHONY: all
all: $(BUILD_D) $(LIBCMT) $(BUILD_D)/openssl/Makefile $(LINKLIBS) $(LIBCRYPTO) $(LIBSSL) $(BUILD_D)/amissl_v$(VERSIONNAME).library $(BUILD_D)/amissl_v$(VERSIONNAME)_test $(BUILD_D)/amisslmaster.library $(BUILD_D)/amisslmaster_test $(BUILD_D)/https $(BUILD_D)/uitest $(BUILD_D)/vatest

# for making a release we compile ALL target with no debug
.PHONY: release
release:
	@echo "  CC $<"
	make OS=os4 clean
	make OS=os4 DEBUG=
	@echo "  CC $<"
	make OS=os3 clean
	make OS=os3 DEBUG=
	#@echo "  CC $<"
	#make OS=mos clean
	#make OS=mos DEBUG=
	#@echo "  CC $<"
	#make OS=aros-i386 clean
	#make OS=aros-i386 DEBUG=
	#@echo "  CC $<"
	#make OS=aros-ppc clean
	#make OS=aros-ppc DEBUG=
	#@echo "  CC $<"
	#make OS=aros-x86_64 clean
	#make OS=aros-x86_64 DEBUG=
	@sh tools/mkrelease.sh

# make the object directory
$(BUILD_D):
	@echo "  MKDIR $@"
	@$(MKDIR) $@

$(BUILD_D)/libcmt: $(BUILD_D)
	@echo "  MKDIR $@"
	@$(MKDIR) $@

$(BUILD_D)/openssl: $(BUILD_D)
	@echo "  MKDIR $@"
	@$(MKDIR) $@

# for compiling single .c files
$(BUILD_D)/%.o: $(SRC_D)/%.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) -c $< -o $@

## OPENSSL BUILD RULES ##

ifeq ($(DEBUG),)
  OPENSSL_MODE="--release"
else
  OPENSSL_MODE="--debug"
endif

$(BUILD_D)/openssl/Makefile: $(BUILD_D)/openssl
	@(cd $(BUILD_D)/openssl; perl ../../openssl/Configure $(OPENSSL_T) enable-mdc2 enable-md2 enable-rc5 no-makedepend no-shared --cross-compile-prefix=$(CROSS_PREFIX) $(OPENSSL_MODE); make include/openssl/opensslconf.h)
	@sh tools/cpheaders.sh $(BUILD_D)

$(LIBCRYPTO): $(BUILD_D)/openssl/Makefile
	@$(MAKE) -C $(BUILD_D)/openssl -f Makefile OPENSSLDIR=AmiSSL: ENGINESDIR=AmiSSL:engines RANLIB=$(RANLIB) all build_tests

$(LIBSSL): $(LIBCRYPTO)

## LIBCMT BUILD RULES ##

$(LIBCMT): $(BUILD_D)/libcmt
	@$(MAKE) -C libcmt CC=$(CC) AR=$(AR) RANLIB=$(RANLIB) OS=$(OS) BUILD_D=../$(BUILD_D)/libcmt

## AMISSL BUILD RULES ##

$(BUILD_D)/amissl_v$(VERSIONNAME).library: $(LIBOBJS) $(LIBCMT) $(LIBSSL) $(LIBCRYPTO)
	@echo "  LD $@"
	@$(CC) -o $@ $(LDFLAGS) $(LIBOBJS) $(LIBS) $(LDLIBS) $(LIBS) -Wl,-M,-Map=$@.map

$(BUILD_D)/amisslmaster.library: $(MASTEROBJS) $(LIBCMT)
	@echo "  LD $@"
	@$(CC) -o $@ $(LDFLAGS) $(MASTEROBJS) $(LDLIBS) $(LIBCMT) -Wl,-M,-Map=$@.map

$(BUILD_D)/libamisslauto.a: $(BUILD_D)/autoinit_amissl_main.o
	@echo "  AR $@"
	@$(AR) r $@ $(BUILD_D)/autoinit_amissl_main.o
	@$(RANLIB) $@

$(BUILD_D)/libamisslauto_newlib.a: $(BUILD_D)/autoinit_amissl_main_newlib.o
	@echo "  AR $@"
	@$(AR) r $@ $(BUILD_D)/autoinit_amissl_main_newlib.o
	@$(RANLIB) $@

$(BUILD_D)/libamisslstubs.a: $(BUILD_D)/libstubs.o
	@echo "  AR $@"
	@$(AR) r $@ $(BUILD_D)/libstubs.o
	@$(RANLIB) $@

$(BUILD_D)/libamissldebug.a: $(BUILD_D)/debug.o
	@echo "  AR $@"
	@$(AR) r $@ $(BUILD_D)/debug.o
	@$(RANLIB) $@

## AMISSL TESTCASE BINARIES ##

$(BUILD_D)/amisslmaster_test: $(TEST_D)/amisslmaster_test.c
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -Wno-format -o $@ $^

$(BUILD_D)/amissl_v$(VERSIONNAME)_test: $(TEST_D)/amissl_test.c
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -Wno-format -o $@ -DVERSIONNAME=$(VERSIONNAME) $^

$(BUILD_D)/https: $(TEST_D)/https.c $(BUILD_D)/libamisslauto.a $(BUILD_D)/libamisslstubs.a
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -DNO_INLINE_STDARG -o $@ $^ -L$(BUILD_D) -lamisslauto -lamisslstubs

$(BUILD_D)/uitest: $(TEST_D)/uitest.c $(BUILD_D)/libamisslauto.a $(BUILD_D)/libamisslstubs.a
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -o $@ $^ -L$(BUILD_D) -lamisslauto -lamisslstubs

$(BUILD_D)/vatest: $(TEST_D)/vatest.c $(BUILD_D)/libamisslauto.a $(BUILD_D)/libamisslstubs.a
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -fno-strict-aliasing -o $@ $^ -L$(BUILD_D) -lamisslauto -lamisslstubs

## SOURCES COMPILED WITHOUT BASEREL SUPPORT ##

$(BUILD_D)/autoinit_amissl_main.o: $(SRC_D)/autoinit_amissl_main.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) $(NOBASEREL) -c $< -o $@ -DVERSION=$(VERSION) $(INCLUDE)

$(BUILD_D)/autoinit_amissl_main_newlib.o: $(SRC_D)/autoinit_amissl_main.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) $(NOBASEREL) -c $< -o $@ -DVERSION=$(VERSION) $(INCLUDE) -mcrt=newlib

$(BUILD_D)/libstubs.o: $(SRC_D)/libstubs.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) $(NOBASEREL) -c $< -o $@ -DAMISSL $(INCLUDE)

$(BUILD_D)/debug.o: $(SRC_D)/debug.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) $(NOBASEREL) -c $< -o $@

## SOURCES COMPILED WITH restore-a4 ##

$(BUILD_D)/amisslmaster_library.o: $(SRC_D)/amisslmaster_library.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) $(BRELLIB) -c $< -o $@

$(BUILD_D)/amissl_library.o: $(SRC_D)/amissl_library.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) $(BRELLIB) -c $< -o $@

$(BUILD_D)/amissl_glue.o: $(SRC_D)/amissl_glue.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) -I./openssl/crypto/include -I./openssl -I./openssl/include -Wno-deprecated-declarations $(BRELLIB) -c $< -o $@

# cleanup target
.PHONY: clean
clean:
	-rm -f $(BUILD_D)/*.o $(BUILD_D)/*.a
	-rm -f $(BUILD_D)/amissl_v$(VERSIONNAME).library*
	-rm -f $(BUILD_D)/amisslmaster.library*
	-rm -rf $(BUILD_D)/openssl
	-rm -rf $(BUILD_D)/libcmt

# distclean target
.PHONY: distclean
distclean: clean
	-rm -f openssl/configdata.pm
	-rm -f openssl/include/openssl/opensslconf.h
	-rm -rf $(BUILD_D) $(BUILD_D)

# for creating a .dump file
.PHONY: dump
dump:
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BUILD_D)/amisslmaster.library > $(BUILD_D)/amisslmaster.library.dump
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BUILD_D)/amissl_v$(VERSIONNAME).library > $(BUILD_D)/amissl_v$(VERSIONNAME).library.dump
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BUILD_D)/https > $(BUILD_D)/https.dump
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BUILD_D)/uitest > $(BUILD_D)/uitest.dump
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BUILD_D)/vatest > $(BUILD_D)/vatest.dump

testing:
	@echo "  LD $<"
	@$(CC) basereltest.c -o basereltest -mbaserel -Wl,-M,-Map=$@.map -nostdlib
