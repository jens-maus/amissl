CC = ppc-amigaos-gcc
LD = ppc-amigaos-gcc

CFLAGS= -I$(AmiSSL)/include -D__USE_INLINE__ -c
LDFLAGS= -lauto -lamisslauto
PROGS= vatest # https # md2test ssltest  # randtest 

all: $(PROGS)

clean:
	-rm $(PROGS)
	-rm *.o

.c.o:
	$(CC) $< $(CFLAGS) -o $@

https: https.o
	$(LD) $< $(LDFLAGS) -o $@

md2test: md2test.o
	$(LD) $< $(LDFLAGS) -o $@

randtest: randtest.o
	$(CC) $< $(LDFLAGS) -o $@

ssltest: ssltest.o
	$(LD) $< $(LDFLAGS) -o $@ -Wl,-M,-Map=$@.map

vatest: vatest.o
	$(LD) $< $(LDFLAGS) -o $@ -Wl,-M,-Map=$@.map
