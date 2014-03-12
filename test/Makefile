CC = ppc-amigaos-gcc
LD = ppc-amigaos-gcc

ifeq ($(AmiSSL),)
  AmiSSL=..
endif

CFLAGS = -I$(AmiSSL)/include -D__USE_INLINE__ -c
LDFLAGS = -lauto -L$(AmiSSL)/lib -lamisslauto -lamisslstubs -lc
PROGS = vatest uitest https

all: $(PROGS)

clean:
	-rm $(PROGS)
	-rm *.o *.map

%.o: %.c
	$(CC) $< $(CFLAGS) -o $@

https: https.o
	$(LD) $< $(LDFLAGS) -o $@

vatest: vatest.o
	$(LD) $< $(LDFLAGS) -o $@ -Wl,-M,-Map=$@.map

uitest: uitest.o
	$(LD) $< $(LDFLAGS) -o $@
