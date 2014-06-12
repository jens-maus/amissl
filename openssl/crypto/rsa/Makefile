#
# OpenSSL/crypto/rsa/Makefile
#

DIR=	rsa
TOP=	../..
CC=	cc
INCLUDES= -I.. -I$(TOP) -I../../include
CFLAG=-g
MAKEFILE=	Makefile
AR=		ar r

CFLAGS= $(INCLUDES) $(CFLAG)

GENERAL=Makefile
TEST=rsa_test.c
APPS=

LIB=$(TOP)/libcrypto.a
LIBSRC= rsa_eay.c rsa_gen.c rsa_lib.c rsa_sign.c rsa_saos.c rsa_err.c \
	rsa_pk1.c rsa_ssl.c rsa_none.c rsa_oaep.c rsa_chk.c rsa_null.c \
	rsa_pss.c rsa_x931.c rsa_x931g.c rsa_asn1.c rsa_depr.c rsa_eng.c
LIBOBJ= rsa_eay.o rsa_gen.o rsa_lib.o rsa_sign.o rsa_saos.o rsa_err.o \
	rsa_pk1.o rsa_ssl.o rsa_none.o rsa_oaep.o rsa_chk.o rsa_null.o \
	rsa_pss.o rsa_x931.o rsa_x931g.o rsa_asn1.o rsa_depr.o rsa_eng.o

SRC= $(LIBSRC)

EXHEADER= rsa.h
HEADER=	$(EXHEADER)

ALL=    $(GENERAL) $(SRC) $(HEADER)

top:
	(cd ../..; $(MAKE) DIRS=crypto SDIRS=$(DIR) sub_all)

all:	lib

lib:	$(LIBOBJ)
	$(ARX) $(LIB) $(LIBOBJ)
	$(RANLIB) $(LIB) || echo Never mind.
	@touch lib

files:
	$(PERL) $(TOP)/util/files.pl Makefile >> $(TOP)/MINFO

links:
	@$(PERL) $(TOP)/util/mklink.pl ../../include/openssl $(EXHEADER)
	@$(PERL) $(TOP)/util/mklink.pl ../../test $(TEST)
	@$(PERL) $(TOP)/util/mklink.pl ../../apps $(APPS)

install:
	@[ -n "$(INSTALLTOP)" ] # should be set by top Makefile...
	@headerlist="$(EXHEADER)"; for i in $$headerlist ; \
	do  \
	(cp $$i $(INSTALL_PREFIX)$(INSTALLTOP)/include/openssl/$$i; \
	chmod 644 $(INSTALL_PREFIX)$(INSTALLTOP)/include/openssl/$$i ); \
	done;

tags:
	ctags $(SRC)

tests:

lint:
	lint -DLINT $(INCLUDES) $(SRC)>fluff

depend:
	@[ -n "$(MAKEDEPEND)" ] # should be set by upper Makefile...
	$(MAKEDEPEND) -- $(CFLAG) $(INCLUDES) $(DEPFLAG) -- $(PROGS) $(LIBSRC)

dclean:
	$(PERL) -pe 'if (/^# DO NOT DELETE THIS LINE/) {print; exit(0);}' $(MAKEFILE) >Makefile.new
	mv -f Makefile.new $(MAKEFILE)

clean:
	rm -f *.o */*.o *.obj lib tags core .pure .nfs* *.old *.bak fluff

# DO NOT DELETE THIS LINE -- make depend depends on it.

rsa_asn1.o: ../../e_os.h ../cryptlib.h rsa_asn1.c
rsa_chk.o: rsa_chk.c
rsa_depr.o: ../../e_os.h ../cryptlib.h rsa_depr.c
rsa_eay.o: ../../e_os.h ../cryptlib.h rsa_eay.c
rsa_eng.o: ../../e_os.h ../cryptlib.h rsa_eng.c
rsa_err.o: rsa_err.c
rsa_gen.o: ../../e_os.h ../cryptlib.h rsa_gen.c
rsa_lib.o: ../../e_os.h ../cryptlib.h rsa_lib.c
rsa_none.o: ../../e_os.h ../cryptlib.h rsa_none.c
rsa_null.o: ../../e_os.h ../cryptlib.h rsa_null.c
rsa_oaep.o: ../../e_os.h ../cryptlib.h rsa_oaep.c
rsa_pk1.o: ../../e_os.h ../cryptlib.h rsa_pk1.c
rsa_pss.o: ../../e_os.h ../cryptlib.h rsa_pss.c
rsa_saos.o: ../../e_os.h ../cryptlib.h rsa_saos.c
rsa_sign.o: ../../e_os.h ../cryptlib.h rsa_sign.c
rsa_ssl.o: ../../e_os.h ../cryptlib.h rsa_ssl.c
rsa_x931.o: ../../e_os.h ../cryptlib.h rsa_x931.c
rsa_x931g.o: rsa_x931g.c
