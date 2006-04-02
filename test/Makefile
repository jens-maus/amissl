CC = ppc-amigaos-gcc
LD = ppc-amigaos-gcc

CFLAGS = -I$(AmiSSL)/include -D__USE_INLINE__ -c
LDFLAGS = -lauto -L$(AmiSSL)/lib -lamisslauto -lamisslstubs
PROGS = vatest uitest https

all: $(PROGS)

clean:
	-rm $(PROGS)
	-rm *.o

%.o: %.c
	$(CC) $< $(CFLAGS) -o $@

https: https.o
	$(LD) $< $(LDFLAGS) -o $@

vatest: vatest.o
	$(LD) $< $(LDFLAGS) -o $@ -Wl,-M,-Map=$@.map

uitest: uitest.o
	$(LD) $< $(LDFLAGS) -o $@
