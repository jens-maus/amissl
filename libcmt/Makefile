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

OBJ_D=$(AmiSSL)/.obj_$(OS)/libcmt
BIN_D=$(AmiSSL)/bin_$(OS)

CFLAGS=-O3 -fomit-frame-pointer -mcrt=clib2 -mcpu=powerpc -mstrict-align -I$(AmiSSL)/include -D__USE_INLINE__ -D__NO_NET_API -mbaserel -W -Wall

all: $(BIN_D)/libcmt.a

clean:
	rm -f $(OBJ_D)/* $(BIN_D)/libcmt.a

$(OBJ_D)/%.o: %.c
	@echo "  CC $<"
	@$(CC) -c $< -o $@ $(CFLAGS)

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
