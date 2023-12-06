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
#***************************************************************************/

BUILD_D=../build_$(OS)/libcmt

WARN     = -W -Wall -Wwrite-strings -Wpointer-arith -Wsign-compare -fno-strict-aliasing #-Wunreachable-code
OPTFLAGS = -O3 -fomit-frame-pointer
DEBUG    = -DDEBUG -fno-omit-frame-pointer #-O0
DEBUGSYM = -g -gstabs
CFLAGS   = $(CPU) $(OPTFLAGS) $(DEBUG) $(DEBUGSYM) $(WARN) -I. -I../include -D__NO_NET_API

CC      = $(CROSS_PREFIX)gcc
STRIP   = $(CROSS_PREFIX)strip
OBJDUMP = $(CROSS_PREFIX)objdump
AR      = $(CROSS_PREFIX)ar
RANLIB  = $(CROSS_PREFIX)ranlib

# different options per target OS
ifeq ($(OS), os4)

  ##############################
  # AmigaOS4

  # Compiler/link/strip commands
  ifneq ($(HOST), AmigaOS4)
    CROSS_PREFIX = ppc-amigaos-
  else
    HCFLAGS += -mcrt=clib2
  endif

  # Compiler/Linker flags
  CRT      = clib2
  WARN     += -Wdeclaration-after-statement -Wdisabled-optimization
  CFLAGS   += -mcrt=$(CRT) -mbaserel -mno-sdata -D__USE_INLINE__ \
              -D__C_MACROS__ $(REDEFINE) -Wa,-mregnames
  LDFLAGS  += -mcrt=$(CRT)

else
ifeq ($(OS), $(filter $(OS), os3-68020 os3-68060))

  ##############################
  # AmigaOS3

  # Compiler/link/strip commands
  ifneq ($(HOST), AmigaOS)
    CROSS_PREFIX = m68k-amigaos-
  endif

  # Compiler/Linker flags
  CFLAGS  += -mcrt=clib2 -resident32 -I../include/netinclude -D__CLIB2__ -D__amigaos3__
  LDFLAGS += -mcrt=clib2
  LDLIBS  += -lm

else
ifeq ($(OS), mos)

  ##############################
  # MorphOS

  # Compiler/link/strip commands
  ifneq ($(HOST), MorphOS)
    CROSS_PREFIX = ppc-morphos-
  endif

  # Compiler/Linker flags
  CFLAGS  += -noixemul -mbaserel32 -I./include/netinclude
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

all: $(BUILD_D) $(BUILD_D)/libcmt.a

clean:
	rm -f $(BUILD_D)/*

# make the binary directories
$(BUILD_D):
	@echo "  MKDIR $@"
	@$(MKDIR) $(BUILD_D)

$(BUILD_D)/%.o: %.c
	@echo "  CC $<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_D)/int64_muldi3.o: int64math.c
	@echo "  CC $< -DL_muldi3"
	@$(CC) $(CFLAGS) -c $< -o $@ -DL_muldi3

$(BUILD_D)/int64_umoddi3.o: int64math.c
	@echo "  CC $< -DL_umoddi3"
	@$(CC) $(CFLAGS) -c $< -o $@ -DL_umoddi3

$(BUILD_D)/int64_udivdi3.o: int64math.c
	@echo "  CC $< -DL_udivdi3"
	@$(CC) $(CFLAGS) -c $< -o $@ -DL_udivdi3

$(BUILD_D)/int64_lshrdi3.o: int64math.c
	@echo "  CC $< -DL_lshrdi3"
	@$(CC) $(CFLAGS) -c $< -o $@ -DL_lshrdi3

$(BUILD_D)/int64_ashldi3.o: int64math.c
	@echo "  CC $< -DL_ashldi3"
	@$(CC) $(CFLAGS) -c $< -o $@ -DL_ashldi3

libobjs: $(LIBOBJS)

CLIB2OBJS = $(BUILD_D)/string_memset.o \
            $(BUILD_D)/string_memcmp.o \
            $(BUILD_D)/string_memcpy.o \
            $(BUILD_D)/string_bcopy.o \
            $(BUILD_D)/string_memmove.o \
            $(BUILD_D)/string_memchr.o \
            $(BUILD_D)/string_bzero.o \
            $(BUILD_D)/string_strpbrk.o \
            $(BUILD_D)/string_strcmp.o \
            $(BUILD_D)/string_strdup.o \
            $(BUILD_D)/string_strlen.o \
            $(BUILD_D)/string_strchr.o \
            $(BUILD_D)/string_strrchr.o \
            $(BUILD_D)/string_strcpy.o \
            $(BUILD_D)/string_strncpy.o \
            $(BUILD_D)/string_strncmp.o \
            $(BUILD_D)/string_strlcpy.o \
            $(BUILD_D)/string_strlcat.o \
            $(BUILD_D)/string_strcat.o \
            $(BUILD_D)/string_strcspn.o \
            $(BUILD_D)/string_strspn.o \
            $(BUILD_D)/string_strstr.o \
            $(BUILD_D)/strings_strcasecmp.o \
            $(BUILD_D)/strings_strncasecmp.o \
            $(BUILD_D)/stdlib_atoi.o \
            $(BUILD_D)/stdlib_strtoul.o \
            $(BUILD_D)/stdlib_strtol.o \
            $(BUILD_D)/stdlib_qsort.o \
            $(BUILD_D)/stdlib_calloc.o \
            $(BUILD_D)/ctype_table.o

STDIOOBJS = $(BUILD_D)/malloc.o \
            $(BUILD_D)/free.o \
            $(BUILD_D)/realloc.o \
            $(BUILD_D)/time.o \
            $(BUILD_D)/gmtime.o \
            $(BUILD_D)/getenv.o \
            $(BUILD_D)/stat.o \
            $(BUILD_D)/dirent.o \
            $(BUILD_D)/file.o \
            $(BUILD_D)/fread.o \
            $(BUILD_D)/fwrite.o \
            $(BUILD_D)/refill.o \
            $(BUILD_D)/putc.o \
            $(BUILD_D)/fflush.o \
            $(BUILD_D)/sscanf.o \
            $(BUILD_D)/vsscanf.o \
            $(BUILD_D)/sscanf.o \
            $(BUILD_D)/getpid.o \
            $(BUILD_D)/fprintf.o \
            $(BUILD_D)/perror.o \
            $(BUILD_D)/abort.o \
            $(BUILD_D)/exit.o \
            $(BUILD_D)/clock.o \
            $(BUILD_D)/error.o \
            $(BUILD_D)/errno.o \
            $(BUILD_D)/math.o \
            $(BUILD_D)/timer.o \
            $(BUILD_D)/gettimeofday.o \
            $(BUILD_D)/usleep.o \
            $(BUILD_D)/vsnprintf.o \
            $(BUILD_D)/tolower.o \
            $(BUILD_D)/toupper.o

NWLIBOBJS = $(BUILD_D)/setsockopt.o \
            $(BUILD_D)/accept.o \
            $(BUILD_D)/gethostbyname.o \
            $(BUILD_D)/listen.o \
            $(BUILD_D)/send.o \
            $(BUILD_D)/bind.o \
            $(BUILD_D)/getservbyname.o \
            $(BUILD_D)/shutdown.o \
            $(BUILD_D)/closesocket.o \
            $(BUILD_D)/getsockopt.o \
            $(BUILD_D)/getsockname.o \
            $(BUILD_D)/getpeername.o \
            $(BUILD_D)/inet_ntoa.o \
            $(BUILD_D)/socket.o \
            $(BUILD_D)/connect.o \
            $(BUILD_D)/ioctlsocket.o \
            $(BUILD_D)/recv.o \
            $(BUILD_D)/setsockopt.o \
            $(BUILD_D)/getuid.o \
            $(BUILD_D)/sendto.o \
            $(BUILD_D)/recvfrom.o \
            $(BUILD_D)/openlog.o \
            $(BUILD_D)/closelog.o \
            $(BUILD_D)/syslog.o \
            $(BUILD_D)/select.o

INT64OBJS = $(BUILD_D)/int64_muldi3.o \
            $(BUILD_D)/int64_udivdi3.o \
            $(BUILD_D)/int64_umoddi3.o \
            $(BUILD_D)/int64_lshrdi3.o \
            $(BUILD_D)/int64_ashldi3.o

MISCOBJS  = $(BUILD_D)/threadhash.o \
            $(BUILD_D)/localtime.o \
            $(BUILD_D)/showreq.o \
            $(BUILD_D)/libcmt.o

LIBOBJS = $(CLIB2OBJS) $(STDIOOBJS) $(NWLIBOBJS) $(INT64OBJS) $(MISCOBJS)

$(BUILD_D)/libcmt.a: $(LIBOBJS)
	@echo "  AR $@"
	@$(AR) r $@ $(LIBOBJS)
	@$(RANLIB) $@
