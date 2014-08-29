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

AmiSSL=..
OBJ_D=$(AmiSSL)/.obj_$(OS)/libcmt
BIN_D=$(AmiSSL)/bin_$(OS)

WARN       = -W -Wall -Wwrite-strings -Wpointer-arith -Wsign-compare -fno-strict-aliasing #-Wunreachable-code
OPTFLAGS   = -O3 -fomit-frame-pointer -funroll-loops
DEBUG      = -DDEBUG -fno-omit-frame-pointer #-O0
CFLAGS     = $(CPU) $(WARN) -I$(AmiSSL)/include -D__NO_NET_API

# different options per target OS
ifeq ($(OS), os4)

  ##############################
  # AmigaOS4

  # Compiler/link/strip commands
  ifneq ($(HOST), AmigaOS4)
    CC      = ppc-amigaos-gcc
    STRIP   = ppc-amigaos-strip
    OBJDUMP = ppc-amigaos-objdump
  else
    HCFLAGS += -mcrt=clib2
  endif

  # Compiler/Linker flags
  CRT      = clib2
  CPU      = -mcpu=powerpc -mstrict-align
  WARN     += -Wdeclaration-after-statement -Wdisabled-optimization
  CFLAGS   += -mcrt=$(CRT) -mbaserel -D__USE_INLINE__ \
              $(REDEFINE) -Wa,-mregnames
  LDFLAGS  += -mcrt=$(CRT)

else
ifeq ($(OS), os3)

  ##############################
  # AmigaOS3

  # Compiler/link/strip commands
  ifneq ($(HOST), AmigaOS)
    CC      = m68k-amigaos-gcc
    STRIP   = m68k-amigaos-strip
    OBJDUMP = m68k-amigaos-objdump
  endif

  # Compiler/Linker flags
  CPU	    = -m68020-60 -msoft-float
  CFLAGS  += -I$(AmiSSL)/include/netinclude -DNO_INLINE_STDARG -D__CLIB2__ -D__amigaos3__
  LDFLAGS += -noixemul
  LDLIBS  += -lm

else
ifeq ($(OS), mos)

  ##############################
  # MorphOS

  # Compiler/link/strip commands
  ifneq ($(HOST), MorphOS)
    CC      = ppc-morphos-gcc
    STRIP   = ppc-morphos-strip
    OBJDUMP = ppc-morphos-objdump
  endif

  # Compiler/Linker flags
  CPU     = -mcpu=powerpc
  CFLAGS  += -noixemul -I./include/netinclude
  LDFLAGS += -noixemul

endif
endif
endif

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
    CAT     = cat

    CDUP   = ../
    CDTHIS = ./
    NIL    = /dev/null
endif
endif
endif

all: $(OBJ_D) $(BIN_D) $(BIN_D)/libcmt.a

clean:
	rm -f $(OBJ_D)/* $(BIN_D)/libcmt.a

# make the binary directories
$(BIN_D):
	@echo "  MKDIR $@"
	@$(MKDIR) $(BIN_D)

$(OBJ_D):
	@echo "  MKDIR $@"
	@$(MKDIR) $(OBJ_D)

$(OBJ_D)/%.o: %.c
	@echo "  CC $<"
	$(CC) $(CFLAGS) -c $< -o $@

libobjs: $(LIBOBJS)

OS4OBJS = $(OBJ_D)/error.o \
          $(OBJ_D)/errno.o \
          $(OBJ_D)/stdlib_funcs.o \
          $(OBJ_D)/string_char.o \
          $(OBJ_D)/string_mem.o \
          $(OBJ_D)/math.o \
          $(OBJ_D)/gettimeofday.o

STDIOOBJS = $(OBJ_D)/malloc.o \
            $(OBJ_D)/free.o \
            $(OBJ_D)/realloc.o \
            $(OBJ_D)/time.o \
            $(OBJ_D)/gmtime.o \
            $(OBJ_D)/getenv.o \
            $(OBJ_D)/stat.o \
            $(OBJ_D)/dirent.o \
            $(OBJ_D)/file.o \
            $(OBJ_D)/fread.o \
            $(OBJ_D)/fwrite.o \
            $(OBJ_D)/refill.o \
            $(OBJ_D)/putc.o \
            $(OBJ_D)/fflush.o \
            $(OBJ_D)/sscanf.o \
            $(OBJ_D)/vsscanf.o \
            $(OBJ_D)/sscanf.o \
            $(OBJ_D)/getpid.o \
            $(OBJ_D)/fprintf.o \
            $(OBJ_D)/perror.o \
            $(OBJ_D)/abort.o

NWLIBOBJS = $(OBJ_D)/setsockopt.o \
            $(OBJ_D)/accept.o \
            $(OBJ_D)/gethostbyname.o \
            $(OBJ_D)/listen.o \
            $(OBJ_D)/send.o \
            $(OBJ_D)/bind.o \
            $(OBJ_D)/getservbyname.o \
            $(OBJ_D)/shutdown.o \
            $(OBJ_D)/closesocket.o \
            $(OBJ_D)/getsockopt.o \
            $(OBJ_D)/socket.o \
            $(OBJ_D)/connect.o \
            $(OBJ_D)/ioctlsocket.o \
            $(OBJ_D)/recv.o \
            $(OBJ_D)/setsockopt.o \
            $(OBJ_D)/getuid.o \
            $(OBJ_D)/sendto.o \
            $(OBJ_D)/recvfrom.o

LIBOBJS = $(OS4OBJS) $(STDIOOBJS) $(OBJ_D)/threadhash.o $(NWLIBOBJS) $(OBJ_D)/localtime.o

$(BIN_D)/libcmt.a: $(LIBOBJS)
	@echo "  AR $@"
	@$(AR) r $@ $(LIBOBJS)
	@$(RANLIB) $@
