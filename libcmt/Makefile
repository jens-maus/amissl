CC=ppc-amigaos-gcc-4.0.3
CFLAGS=-O3 -fomit-frame-pointer -mcrt=clib2 -mcpu=powerpc -mstrict-align -I$(AmiSSL)/include -D__USE_INLINE__ -D__NO_NET_API -mbaserel -W -Wall

all: libcmt.a

clean:
	rm -f *.o libcmt.a

%.o: %.c
	@echo CC $<
	@$(CC) -c $< -o $@ $(CFLAGS)

libobjs: $(LIBOBJS)

OS4OBJS = error.o errno.o stdlib_funcs.o string_char.o string_mem.o math.o gettimeofday.o

STDIOOBJS = malloc.o free.o realloc.o time.o gmtime.o getenv.o stat.o \
		dirent.o file.o fread.o fwrite.o refill.o putc.o fflush.o \
		sscanf.o vsscanf.o sscanf.o getpid.o fprintf.o perror.o abort.o

NWLIBOBJS = setsockopt.o accept.o gethostbyname.o listen.o send.o bind.o getservbyname.o shutdown.o \
			closesocket.o getsockopt.o socket.o connect.o ioctlsocket.o recv.o \
			setsockopt.o getuid.o sendto.o recvfrom.o

LIBOBJS=  $(OS4OBJS) $(STDIOOBJS) threadhash.o $(NWLIBOBJS) localtime.o


libcmt.a: $(LIBOBJS)
	@echo AR libcmt.a
	@ppc-amigaos-ar r libcmt.a $(LIBOBJS)
