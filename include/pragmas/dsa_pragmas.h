#ifndef PRAGMAS_DSA_PRAGMAS_H
#define PRAGMAS_DSA_PRAGMAS_H

#pragma libcall DSABase InitDSA 01e 9802
#pragma libcall DSABase CleanupDSA 024 00
#pragma libcall DSABase DSA_SIG_new 02a 00
#pragma libcall DSABase DSA_SIG_free 030 801
#pragma libcall DSABase i2d_DSA_SIG 036 9802
#pragma libcall DSABase d2i_DSA_SIG 03c 09803
#pragma libcall DSABase DSA_do_sign 042 90803
#pragma libcall DSABase DSA_do_verify 048 a90804
#pragma libcall DSABase DSA_OpenSSL 04e 00
#pragma libcall DSABase DSA_set_default_method 054 801
#pragma libcall DSABase DSA_get_default_method 05a 00
#pragma libcall DSABase DSA_set_method 060 9802
#pragma libcall DSABase DSA_new 066 00
#pragma libcall DSABase DSA_new_method 06c 801
#pragma libcall DSABase DSA_free 072 801
#pragma libcall DSABase DSA_up_ref 078 801
#pragma libcall DSABase DSA_size 07e 801
#pragma libcall DSABase DSA_sign_setup 084 ba9804
#pragma libcall DSABase DSA_sign 08a ba918006
#pragma libcall DSABase DSA_verify 090 a2918006
#pragma libcall DSABase DSA_get_ex_new_index 096 ba98005
#pragma libcall DSABase DSA_set_ex_data 09c 90803
#pragma libcall DSABase DSA_get_ex_data 0a2 0802
#pragma libcall DSABase d2i_DSAPublicKey 0a8 09803
#pragma libcall DSABase d2i_DSAPrivateKey 0ae 09803
#pragma libcall DSABase d2i_DSAparams 0b4 09803
#pragma libcall DSABase DSA_generate_parameters 0ba 2ba918007
#pragma libcall DSABase DSA_generate_key 0c0 801
#pragma libcall DSABase i2d_DSAPublicKey 0c6 9802
#pragma libcall DSABase i2d_DSAPrivateKey 0cc 9802
#pragma libcall DSABase i2d_DSAparams 0d2 9802
#pragma libcall DSABase DSAparams_print 0d8 9802
#pragma libcall DSABase DSA_print 0de 09803
#pragma libcall DSABase ERR_load_DSA_strings 0e4 00

#endif /* PRAGMAS_DSA_PRAGMAS_H */
