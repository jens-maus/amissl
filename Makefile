############################################################################
#
# AmiSSL - OpenSSL wrapper for AmigaOS-based systems
# Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
# Copyright (c) 2006-2025 AmiSSL Open Source Team.
# All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License in the file LICENSE in the
# source distribution or at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# AmiSSL Official Support Site: https://github.com/jens-maus/amissl
#
############################################################################

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
    OS = os3-68020
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

VERSION=5
REVISION=20

include openssl/VERSION.dat
VERSIONNAME=$(MAJOR)$(MINOR)$(PATCH)

# Common Directories
PREFIX    = $(CDTHIS)
BUILD_D   = $(PREFIX)build_$(OS)
SRC_D     = $(PREFIX)src
TEST_D    = $(PREFIX)test
VPATH     = $(BUILD_D)
GCCVER    = 4

# Common compiler/linker flags
WARN       = -W -Wall -Wwrite-strings -Wpointer-arith -Wsign-compare #-Wunreachable-code
OPTFLAGS   = -O3 -fomit-frame-pointer
DEBUG      = -DDEBUG -fno-omit-frame-pointer $(DEBUGSYM)
DEBUGSYM   = -g -gstabs
INCLUDE    = -I./include -I$(BUILD_D) -I$(BUILD_D)/openssl/include -I./include/internal
COMCFLAGS  = $(CPU) $(WARN) $(OPTFLAGS) $(DEBUG) $(INCLUDE)
APPCFLAGS  = $(COMCFLAGS)
STUBCFLAGS = $(COMCFLAGS) -DAMISSL_STUBLIB
CFLAGS     = $(COMCFLAGS) $(BASEREL) -DAMISSL -DAMISSL_COMPILE -DBASEREL \
           -DVERSIONNAME=$(VERSIONNAME) -DLIBCPU=$(OS) -Wno-deprecated-declarations
LDFLAGS    = $(CPU) $(BASEREL) $(DEBUGSYM) -nostdlib
LIBSSL     = $(BUILD_D)/openssl/libssl.a
LIBCRYPTO  = $(BUILD_D)/openssl/libcrypto.a
LIBCMT     = $(BUILD_D)/libcmt/libcmt.a

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
  WARN      += -Wdeclaration-after-statement -Wdisabled-optimization
  APPCFLAGS += -std=c99 -mcrt=$(CRT) -D__USE_INLINE__ -D__NEW_TIMEVAL_DEFINITION_USED__ -Wa,-mregnames -specs=tools/gcc-os4.specs
  AINLCFLAGS = $(COMCFLAGS) -std=c99 -mcrt=newlib -D__USE_INLINE__ -D__NEW_TIMEVAL_DEFINITION_USED__ -Wa,-mregnames
  CFLAGS    += -std=c99 -mcrt=$(CRT) -DMULTIBASE -D__USE_INLINE__ -D__NEW_TIMEVAL_DEFINITION_USED__ -D__C_MACROS__ -Wa,-mregnames
  STUBCFLAGS+= -std=c99 -mcrt=$(CRT) -DINLINE4_AMISSL_H -Wno-deprecated-declarations
  STUBINC    = -include $(BUILD_D)/precompiled.h
  LDFLAGS   += -std=c99 -mcrt=$(CRT) -specs=tools/gcc-os4.specs
  LDLIBS    += -lgcc
  BASEREL   = -mbaserel -mno-sdata
  NOBASEREL = -mno-baserel

  EXTRALIBOBJS = $(BUILD_D)/amissl_library_os4.o \
                 $(BUILD_D)/amissl_glue.o \
                 $(BUILD_D)/amissl_glue_extra.o \
                 $(BUILD_D)/amissl_m68k.o \
                 $(BUILD_D)/amisslext_m68k.o

  EXTRAMASTEROBJS = $(BUILD_D)/amisslmaster_m68k.o

  EXTRALINKLIBS = $(BUILD_D)/libamisslauto_newlib.a

  PRECOMPILED_H = $(BUILD_D)/precompiled.h.gch

  GENSTUBS = idltool --linklib --output $(BUILD_D) include/xml/amissl.xml

else
ifeq ($(OS), os3-68020)

  ##############################
  # AmigaOS3 (68020/030/040 nofpu)

  # the OpenSSL target definition to use
  OPENSSL_T = amiga-os3-68020

  # Compiler/link/strip commands
  ifneq ($(HOST), AmigaOS)
    CROSS_PREFIX = m68k-amigaos-
  endif

  # Compiler/Linker flags
  CPU       = -m68020-40 -msoft-float
  APPCFLAGS += -mcrt=clib2 -I./include/netinclude -D__amigaos3__
  CFLAGS    += -mcrt=clib2 -DMULTIBASE -DBASEREL -I./include/netinclude -DNO_INLINE_STDARG -D__amigaos3__
  STUBCFLAGS+= -mcrt=clib2 -D_INLINE_AMISSL_H -D_INLINE_AMISSLEXT_H -D__amigaos3__
  LDFLAGS   += -mcrt=clib2
  LDLIBS    += -ldebug -lc -lgcc -lm -lamiga
  BASEREL   = -resident32
  NOBASEREL = -fno-baserel
  BRELLIB   = -mrestore-a4
  GCCVER    = 2

  EXTRALIBOBJS = $(BUILD_D)/amissl_glue.o \
                 $(BUILD_D)/amissl_glue_extra.o

  GENSTUBS = sfdc --mode=stubs --output=$(BUILD_D)/amissl_files/main_stubs/%f.c --target=m68k-unknown-amigaos --quiet include/sfd/amissl_lib.sfd
  GENSTUBSEXT = sfdc --mode=stubs --output=$(BUILD_D)/amissl_files/main_stubs/%f.c --target=m68k-unknown-amigaos --quiet include/sfd/amisslext_lib.sfd

else
ifeq ($(OS), os3-68060)

  ##############################
  # AmigaOS3 (68060)

  # the OpenSSL target definition to use
  OPENSSL_T = amiga-os3-68060

  # Compiler/link/strip commands
  ifneq ($(HOST), AmigaOS)
    CROSS_PREFIX = m68k-amigaos-
  endif

  # Compiler/Linker flags
  CPU       = -m68060 -msoft-float
  APPCFLAGS += -mcrt=clib2 -I./include/netinclude -D__amigaos3__
  CFLAGS    += -mcrt=clib2 -DMULTIBASE -DBASEREL -I./include/netinclude -DNO_INLINE_STDARG -D__amigaos3__
  STUBCFLAGS+= -mcrt=clib2 -D_INLINE_AMISSL_H -D_INLINE_AMISSLEXT_H -D__amigaos3__
  LDFLAGS   += -mcrt=clib2
  LDLIBS    += -ldebug -lc -lgcc -lm -lamiga
  BASEREL   = -resident32
  NOBASEREL = -fno-baserel
  BRELLIB   = -mrestore-a4
  GCCVER    = 2

  EXTRALIBOBJS = $(BUILD_D)/amissl_glue.o \
                 $(BUILD_D)/amissl_glue_extra.o

  GENSTUBS = sfdc --mode=stubs --output=$(BUILD_D)/amissl_files/main_stubs/%f.c --target=m68k-unknown-amigaos --quiet include/sfd/amissl_lib.sfd
  GENSTUBSEXT = sfdc --mode=stubs --output=$(BUILD_D)/amissl_files/main_stubs/%f.c --target=m68k-unknown-amigaos --quiet include/sfd/amisslext_lib.sfd

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
                 $(BUILD_D)/amissl_glue.o \
                 $(BUILD_D)/amissl_glue_extra.o

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
endif

###########################################################################
# Here starts all stuff that is common for all target platforms and
# hosts.

LIBOBJS = $(BUILD_D)/amissl_libinit.o \
          $(BUILD_D)/amisslext_libinit.o \
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
           $(BUILD_D)/libamisslapps.a \
           $(BUILD_D)/libamissldebug.a \
           $(EXTRALINKLIBS)

LIBS = -L$(BUILD_D) $(LIBSSL) $(LIBCRYPTO) $(LIBCMT)

APPS =  $(BUILD_D)/amisslmaster_test $(BUILD_D)/amissl_v$(VERSIONNAME)_test \
        $(BUILD_D)/https $(BUILD_D)/httpget $(BUILD_D)/uitest $(BUILD_D)/vatest

# main target
.PHONY: all
all: $(BUILD_D) $(BUILD_D)/amissl_rev.h $(LIBCMT) $(BUILD_D)/openssl/Makefile $(LINKLIBS) $(LIBCRYPTO) $(LIBSSL) $(BUILD_D)/amissl_v$(VERSIONNAME).library $(BUILD_D)/amisslmaster.library $(APPS)

# for making a release we compile ALL target with no debug
.PHONY: release
release:
	@echo "  CC $<"
	make OS=os3-68020 clean
	make OS=os3-68020 DEBUG=
	@echo "  CC $<"
	make OS=os3-68060 clean
	make OS=os3-68060 DEBUG=
	@echo "  CC $<"
	make OS=os4 clean
	make OS=os4 DEBUG= all build_docs
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
	@(cd $(BUILD_D)/openssl; perl ../../openssl/Configure $(OPENSSL_T) --cross-compile-prefix=$(CROSS_PREFIX) $(OPENSSL_MODE); make build_generated)
	@sh tools/cpheaders.sh $(BUILD_D)

$(LIBCRYPTO): $(BUILD_D)/openssl/Makefile
	@$(MAKE) -C $(BUILD_D)/openssl -f Makefile OPENSSLDIR=AmiSSL: ENGINESDIR=AmiSSL:engines MODULESDIR=AmiSSL:modules RANLIB=$(RANLIB) build_sw build_programs

$(LIBSSL): $(LIBCRYPTO)

.PHONY: build_docs
build_docs:
	@$(MAKE) -C $(BUILD_D)/openssl -f Makefile build_generated_pods

## LIBCMT BUILD RULES ##

$(LIBCMT): $(BUILD_D)/libcmt libcmt
	$(MAKE) -C libcmt CC=$(CC) AR=$(AR) RANLIB=$(RANLIB) OS=$(OS) CPU="$(CPU)" BUILD_D=../$(BUILD_D)/libcmt

## AMISSL BUILD RULES ##

$(BUILD_D)/amissl_rev.h:
	@bumprev -q -v $(VERSION) -r $(REVISION) -n OpenSSL -b $(BUILD_D)/amissl -i h

$(BUILD_D)/amissl_v$(VERSIONNAME).library: $(LIBOBJS) $(LIBCMT) $(LIBSSL) $(LIBCRYPTO)
	@echo "  LD $@"
	@$(CC) -o $@ $(LDFLAGS) $(LIBOBJS) $(LIBS) $(LDLIBS) $(LIBS) -Wl,-M,--cref,-Map=$@.map

$(BUILD_D)/amisslmaster.library: $(MASTEROBJS) $(LIBCMT)
	@echo "  LD $@"
	@$(CC) -o $@ $(LDFLAGS) $(MASTEROBJS) $(LDLIBS) $(LIBCMT) -Wl,-M,--cref,-Map=$@.map

$(BUILD_D)/libamisslauto.a: $(BUILD_D)/autoinit_assl.o
	@echo "  AR $@"
	@$(AR) r $@ $<
	@$(RANLIB) $@

$(BUILD_D)/libamisslauto_newlib.a: $(BUILD_D)/autoinit_assl_newlib.o
	@echo "  AR $@"
	@$(AR) r $@ $<
	@$(RANLIB) $@

$(BUILD_D)/libamisslapps.a: $(BUILD_D)/libstubs.o $(BUILD_D)/appsoutput.o
	@echo "  AR $@"
	@$(AR) r $@ $(BUILD_D)/libstubs.o $(BUILD_D)/appsoutput.o
	@$(RANLIB) $@

$(BUILD_D)/libamissldebug.a: $(BUILD_D)/debug.o
	@echo "  AR $@"
	@$(AR) r $@ $<
	@$(RANLIB) $@

## AMISSL STUB LINKLIB ##

$(BUILD_D)/amissl_files/main_stubs: include/xml/amissl.xml
	@$(MKDIR) $@
	@$(GENSTUBS)
	@$(GENSTUBSEXT)
	@$(RM) $@/OBSOLETE_*.c

STUBSRCS = $(sort $(wildcard $(BUILD_D)/amissl_files/main_stubs/*.c))
STUBOBJS = $(patsubst %.c,%.o,$(STUBSRCS))

$(PRECOMPILED_H): include/proto/amissl.h include/xml/amissl.xml
	@echo "  CC $<"
	$(CC) $(STUBCFLAGS) -c $< -o $@

$(BUILD_D)/amissl_files/main_stubs/%.o: $(BUILD_D)/amissl_files/main_stubs/%.c $(PRECOMPILED_H)
	@echo "  CC $<"
	@$(CC) $(STUBCFLAGS) $(STUBINC) -c $< -o $@

.PHONY: stublib
stublib: $(STUBOBJS)
	@echo "  AR libamisslstubs.a"
	@$(AR) r $(BUILD_D)/libamisslstubs.a $(STUBOBJS)
	@$(RANLIB) $(BUILD_D)/libamisslstubs.a

$(BUILD_D)/libamisslstubs.a: $(BUILD_D)/amissl_files/main_stubs $(STUBOBJS)
	@$(MAKE) stublib

## AMISSL TESTCASE BINARIES ##

$(BUILD_D)/amisslmaster_test: $(TEST_D)/amisslmaster_test.c
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -Wno-format -o $@ $^

$(BUILD_D)/amissl_v$(VERSIONNAME)_test: $(TEST_D)/amissl_test.c
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -Wno-format -o $@ -DVERSIONNAME=$(VERSIONNAME) $^

$(BUILD_D)/https: $(TEST_D)/https.c
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -o $@ $^

$(BUILD_D)/httpget: $(TEST_D)/httpget.c
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -o $@ $^

$(BUILD_D)/uitest: $(TEST_D)/uitest.c $(BUILD_D)/libamisslauto.a
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -DNO_INLINE_VARARGS -o $@ $< -L$(BUILD_D) -lamisslauto

$(BUILD_D)/vatest: $(TEST_D)/vatest.c $(BUILD_D)/libamisslauto.a $(BUILD_D)/libamisslstubs.a
	@echo "  CC/LD $@"
	@$(CC) $(APPCFLAGS) -DNO_INLINE_VARARGS -fno-strict-aliasing -o $@ $< -L$(BUILD_D) -lamisslauto -lamisslstubs

## SOURCES COMPILED WITHOUT BASEREL SUPPORT ##

$(BUILD_D)/autoinit_assl.o: $(SRC_D)/autoinit_amissl_main.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) $(NOBASEREL) -c $< -o $@ -DVERSION=$(VERSION) $(INCLUDE)

$(BUILD_D)/autoinit_assl_newlib.o: $(SRC_D)/autoinit_amissl_main.c
	@echo "  CC $<"
	@$(CC) $(AINLCFLAGS) $(NOBASEREL) -c $< -o $@ -DVERSION=$(VERSION) $(INCLUDE)

$(BUILD_D)/libstubs.o: $(SRC_D)/libstubs.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) $(NOBASEREL) -c $< -o $@ -DAMISSL $(INCLUDE)

$(BUILD_D)/appsoutput.o: $(SRC_D)/appsoutput.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) $(NOBASEREL) -c $< -o $@ $(INCLUDE)

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
	@$(CC) $(CFLAGS) -I./openssl/crypto/include -I./openssl -I./openssl/include $(BRELLIB) -c $< -o $@

# cleanup target
.PHONY: clean
clean:
	-rm -f $(BUILD_D)/*.o $(BUILD_D)/*.a $(BUILD_D)/*.h
	-rm -f $(BUILD_D)/amissl_v$(VERSIONNAME).library*
	-rm -f $(BUILD_D)/amisslmaster.library*
	-rm -rf $(BUILD_D)/openssl
	-rm -rf $(BUILD_D)/libcmt

# distclean target
.PHONY: distclean
distclean: clean
	-rm -rf $(BUILD_D) $(BUILD_D)

# for creating a .dump file
.PHONY: dump
dump:
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BUILD_D)/amisslmaster.library > $(BUILD_D)/amisslmaster.library.dump
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BUILD_D)/amissl_v$(VERSIONNAME).library > $(BUILD_D)/amissl_v$(VERSIONNAME).library.dump
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BUILD_D)/https > $(BUILD_D)/https.dump
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BUILD_D)/httpget > $(BUILD_D)/httpget.dump
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BUILD_D)/uitest > $(BUILD_D)/uitest.dump
	-$(OBJDUMP) --section-headers --all-headers --reloc --disassemble-all $(BUILD_D)/vatest > $(BUILD_D)/vatest.dump

testing:
	@echo "  LD $<"
	@$(CC) basereltest.c -o basereltest -mbaserel -Wl,-M,-Map=$@.map -nostdlib
