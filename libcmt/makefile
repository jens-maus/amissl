CC=ppc-amigaos-gcc
CFLAGS=-I$(AmiSSL)/include -D__USE_INLINE__ -mbaserel -O2 -g \
       -Wall -Wno-pointer-sign

all: libcmt.a

clean:
	rm -f *.o libcmt.a

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

libobjs: $(LIBOBJS)

STDIOOBJS = malloc.o free.o realloc.o time.o gmtime.o getenv.o stat.o \
		dirent.o file.o fread.o fwrite.o refill.o putc.o fflush.o \
		sscanf.o vsscanf.o sscanf.o getpid.o

NWLIBOBJS = setsockopt.o accept.o gethostbyname.o listen.o send.o bind.o getservbyname.o shutdown.o \
			closesocket.o getsockopt.o socket.o connect.o ioctlsocket.o recv.o \
			setsockopt.o getuid.o

LIBOBJS=  $(STDIOOBJS) threadhash.o $(NWLIBOBJS) localtime.o # mt.o


libcmt.a: $(LIBOBJS)
	ppc-amigaos-ar r libcmt.a $(LIBOBJS)
