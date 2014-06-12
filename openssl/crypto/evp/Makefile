#
# OpenSSL/crypto/evp/Makefile
#

DIR=	evp
TOP=	../..
CC=	cc
INCLUDES= -I.. -I$(TOP) -I../../include
CFLAG=-g
MAKEFILE=	Makefile
AR=		ar r

CFLAGS= $(INCLUDES) $(CFLAG)

GENERAL=Makefile
TEST=evp_test.c
TESTDATA=evptests.txt
APPS=

LIB=$(TOP)/libcrypto.a
LIBSRC= encode.c digest.c dig_eng.c evp_enc.c evp_key.c evp_acnf.c evp_cnf.c \
	e_des.c e_bf.c e_idea.c e_des3.c e_camellia.c\
	e_rc4.c e_aes.c names.c e_seed.c \
	e_xcbc_d.c e_rc2.c e_cast.c e_rc5.c enc_min.c \
	m_null.c m_md2.c m_md4.c m_md5.c m_sha.c m_sha1.c \
	m_dss.c m_dss1.c m_mdc2.c m_ripemd.c m_ecdsa.c\
	p_open.c p_seal.c p_sign.c p_verify.c p_lib.c p_enc.c p_dec.c \
	bio_md.c bio_b64.c bio_enc.c evp_err.c e_null.c \
	c_all.c c_allc.c c_alld.c evp_lib.c bio_ok.c \
	evp_pkey.c evp_pbe.c p5_crpt.c p5_crpt2.c \
	e_old.c

LIBOBJ=	encode.o digest.o dig_eng.o evp_enc.o evp_key.o evp_acnf.o evp_cnf.o \
	e_des.o e_bf.o e_idea.o e_des3.o e_camellia.o\
	e_rc4.o e_aes.o names.o e_seed.o \
	e_xcbc_d.o e_rc2.o e_cast.o e_rc5.o enc_min.o \
	m_null.o m_md2.o m_md4.o m_md5.o m_sha.o m_sha1.o \
	m_dss.o m_dss1.o m_mdc2.o m_ripemd.o m_ecdsa.o\
	p_open.o p_seal.o p_sign.o p_verify.o p_lib.o p_enc.o p_dec.o \
	bio_md.o bio_b64.o bio_enc.o evp_err.o e_null.o \
	c_all.o c_allc.o c_alld.o evp_lib.o bio_ok.o \
	evp_pkey.o evp_pbe.o p5_crpt.o p5_crpt2.o \
	e_old.o

SRC= $(LIBSRC)

EXHEADER= evp.h
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
	cp $(TESTDATA) ../../test
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
	$(MAKEDEPEND) -- $(CFLAG) $(INCLUDES) $(DEPFLAG) -- $(LIBSRC)

dclean:
	$(PERL) -pe 'if (/^# DO NOT DELETE THIS LINE/) {print; exit(0);}' $(MAKEFILE) >Makefile.new
	mv -f Makefile.new $(MAKEFILE)

clean:
	rm -f *.o *.obj lib tags core .pure .nfs* *.old *.bak fluff

# DO NOT DELETE THIS LINE -- make depend depends on it.

bio_b64.o: ../../e_os.h ../cryptlib.h bio_b64.c
bio_enc.o: ../../e_os.h ../cryptlib.h bio_enc.c
bio_md.o: ../../e_os.h ../cryptlib.h bio_md.c
bio_ok.o: ../../e_os.h ../cryptlib.h bio_ok.c
c_all.o: ../../e_os.h ../cryptlib.h c_all.c
c_allc.o: ../../e_os.h ../cryptlib.h c_allc.c
c_alld.o: ../../e_os.h ../cryptlib.h c_alld.c
dig_eng.o: ../../e_os.h ../cryptlib.h dig_eng.c evp_locl.h
digest.o: ../../e_os.h ../cryptlib.h digest.c evp_locl.h
e_aes.o: e_aes.c evp_locl.h
e_bf.o: ../../e_os.h ../cryptlib.h e_bf.c evp_locl.h
e_cast.o: ../../e_os.h ../cryptlib.h e_cast.c evp_locl.h
e_des.o: ../../e_os.h ../cryptlib.h e_des.c evp_locl.h
e_des3.o: ../../e_os.h ../cryptlib.h e_des3.c evp_locl.h
e_idea.o: ../../e_os.h ../cryptlib.h e_idea.c evp_locl.h
e_null.o: ../../e_os.h ../cryptlib.h e_null.c
e_rc2.o: ../../e_os.h ../cryptlib.h e_rc2.c evp_locl.h
e_rc4.o: ../../e_os.h ../cryptlib.h e_rc4.c evp_locl.h
e_rc5.o: ../../e_os.h ../cryptlib.h e_rc5.c evp_locl.h
e_seed.o: e_seed.c
e_xcbc_d.o: ../../e_os.h ../cryptlib.h e_xcbc_d.c
enc_min.o: ../../e_os.h ../cryptlib.h enc_min.c evp_locl.h
encode.o: ../../e_os.h ../cryptlib.h encode.c
evp_acnf.o: ../../e_os.h ../cryptlib.h evp_acnf.c
evp_cnf.o: ../../e_os.h ../cryptlib.h evp_cnf.c
evp_enc.o: ../../e_os.h ../cryptlib.h evp_enc.c evp_locl.h
evp_err.o: evp_err.c
evp_key.o: ../../e_os.h ../cryptlib.h evp_key.c
evp_lib.o: ../../e_os.h ../cryptlib.h evp_lib.c
evp_pbe.o: ../../e_os.h ../cryptlib.h evp_pbe.c
evp_pkey.o: ../../e_os.h ../cryptlib.h evp_pkey.c
m_dss.o: ../../e_os.h ../cryptlib.h m_dss.c
m_dss1.o: ../../e_os.h ../cryptlib.h m_dss1.c
m_ecdsa.o: ../../e_os.h ../cryptlib.h m_ecdsa.c
m_md2.o: ../../e_os.h ../cryptlib.h evp_locl.h m_md2.c
m_md4.o: ../../e_os.h ../cryptlib.h evp_locl.h m_md4.c
m_md5.o: ../../e_os.h ../cryptlib.h evp_locl.h m_md5.c
m_mdc2.o: ../../e_os.h ../cryptlib.h evp_locl.h m_mdc2.c
m_null.o: ../../e_os.h ../cryptlib.h m_null.c
m_ripemd.o: ../../e_os.h ../cryptlib.h m_ripemd.c
m_sha.o: ../../e_os.h ../cryptlib.h evp_locl.h m_sha.c
m_sha1.o: ../../e_os.h ../cryptlib.h m_sha1.c
names.o: ../../e_os.h ../cryptlib.h names.c
p5_crpt.o: ../../e_os.h ../cryptlib.h p5_crpt.c
p5_crpt2.o: ../../e_os.h ../cryptlib.h p5_crpt2.c
p_dec.o: ../../e_os.h ../cryptlib.h p_dec.c
p_enc.o: ../../e_os.h ../cryptlib.h p_enc.c
p_lib.o: ../../e_os.h ../cryptlib.h p_lib.c
p_open.o: ../../e_os.h ../cryptlib.h p_open.c
p_seal.o: ../../e_os.h ../cryptlib.h p_seal.c
p_sign.o: ../../e_os.h ../cryptlib.h p_sign.c
p_verify.o: ../../e_os.h ../cryptlib.h p_verify.c
