CC = ppc-amigaos-gcc
LD = ppc-amigaos-gcc

CFLAGS = -I$(AmiSSL)/include -D__USE_INLINE__ -c
LDFLAGS = -lauto -L$(AmiSSL)/lib -lamisslauto -lamisslstubs
PROGS = vatest uitest https ssltest

all: $(PROGS)

clean:
	-rm $(PROGS)
	-rm *.o

%.o: %.c
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

uitest: uitest.o
	$(LD) $< $(LDFLAGS) -o $@
