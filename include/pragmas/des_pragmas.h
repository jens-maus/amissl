#ifndef PRAGMAS_DES_PRAGMAS_H
#define PRAGMAS_DES_PRAGMAS_H

#pragma libcall DESBase InitDES 01e 801
#pragma libcall DESBase CleanupDES 024 00
#pragma libcall DESBase des_options 02a 00
#pragma libcall DESBase des_ecb3_encrypt 030 32109806
#pragma libcall DESBase des_cbc_cksum 036 a109805
#pragma libcall DESBase des_cbc_encrypt 03c 2a109806
#pragma libcall DESBase des_ncbc_encrypt 042 2a109806
#pragma libcall DESBase des_xcbc_encrypt 048 32ba109808
#pragma libcall DESBase des_cfb_encrypt 04e 3a2109807
#pragma libcall DESBase des_ecb_encrypt 054 109804
#pragma libcall DESBase des_encrypt1 05a 10803
#pragma libcall DESBase des_encrypt2 060 10803
#pragma libcall DESBase des_encrypt3 066 210804
#pragma libcall DESBase des_decrypt3 06c 210804
#pragma libcall DESBase des_ede3_cbc_encrypt 072 4a32109808
#pragma libcall DESBase des_ede3_cbcm_encrypt 078 4ba32109809
#pragma libcall DESBase des_ede3_cfb64_encrypt 07e 4ba32109809
#pragma libcall DESBase des_ede3_ofb64_encrypt 084 ba32109808
#pragma libcall DESBase des_xwhite_in2out 08a a9803
#pragma libcall DESBase des_fcrypt 090 a9803
#pragma libcall DESBase des_crypt 096 9802
#pragma libcall DESBase des_ofb_encrypt 09c a2109806
#pragma libcall DESBase des_pcbc_encrypt 0a2 2a109806
#pragma libcall DESBase des_quad_cksum 0a8 a109805
#pragma libcall DESBase des_random_seed 0ae 801
#pragma libcall DESBase des_random_key 0b4 801
#pragma libcall DESBase des_read_password 0ba 09803
#pragma libcall DESBase des_read_2passwords 0c0 0a9804
#pragma libcall DESBase des_read_pw_string 0c6 190804
#pragma libcall DESBase des_set_odd_parity 0cc 801
#pragma libcall DESBase des_check_key_parity 0d2 801
#pragma libcall DESBase des_is_weak_key 0d8 801
#pragma libcall DESBase des_set_key 0de 0802
#pragma libcall DESBase des_key_sched 0e4 0802
#pragma libcall DESBase des_set_key_checked 0ea 0802
#pragma libcall DESBase des_set_key_unchecked 0f0 0802
#pragma libcall DESBase des_string_to_key 0f6 9802
#pragma libcall DESBase des_string_to_2keys 0fc a9803
#pragma libcall DESBase des_cfb64_encrypt 102 2ba109807
#pragma libcall DESBase des_ofb64_encrypt 108 ba109806
#pragma libcall DESBase des_read_pw 10e 1a09805

#endif /* PRAGMAS_DES_PRAGMAS_H */
