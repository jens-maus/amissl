#ifndef PRAGMAS_RSA_PRAGMAS_H
#define PRAGMAS_RSA_PRAGMAS_H

#pragma libcall RSABase InitRSA 01e a9803
#pragma libcall RSABase CleanupRSA 024 00
#pragma libcall RSABase RSA_new 02a 00
#pragma libcall RSABase RSA_new_method 030 801
#pragma libcall RSABase RSA_size 036 801
#pragma libcall RSABase RSA_generate_key 03c 981004
#pragma libcall RSABase RSA_check_key 042 801
#pragma libcall RSABase RSA_public_encrypt 048 1a98005
#pragma libcall RSABase RSA_private_encrypt 04e 1a98005
#pragma libcall RSABase RSA_public_decrypt 054 1a98005
#pragma libcall RSABase RSA_private_decrypt 05a 1a98005
#pragma libcall RSABase RSA_free 060 801
#pragma libcall RSABase RSA_flags 066 801
#pragma libcall RSABase RSA_set_default_method 06c 801
#pragma libcall RSABase RSA_get_default_method 072 00
#pragma libcall RSABase RSA_get_method 078 801
#pragma libcall RSABase RSA_set_method 07e 9802
#pragma libcall RSABase RSA_memory_lock 084 801
#pragma libcall RSABase RSA_PKCS1_SSLeay 08a 00
#pragma libcall RSABase RSA_null_method 090 00
#pragma libcall RSABase RSA_sign 096 ba918006
#pragma libcall RSABase RSA_verify 09c a2918006
#pragma libcall RSABase RSA_sign_ASN1_OCTET_STRING 0a2 ba918006
#pragma libcall RSABase RSA_verify_ASN1_OCTET_STRING 0a8 a2918006
#pragma libcall RSABase RSA_blinding_on 0ae 9802
#pragma libcall RSABase RSA_blinding_off 0b4 801
#pragma libcall RSABase RSA_padding_add_PKCS1_type_1 0ba 190804
#pragma libcall RSABase RSA_padding_check_PKCS1_type_1 0c0 2190805
#pragma libcall RSABase RSA_padding_add_PKCS1_type_2 0c6 190804
#pragma libcall RSABase RSA_padding_check_PKCS1_type_2 0cc 2190805
#pragma libcall RSABase RSA_padding_add_PKCS1_OAEP 0d2 2a190806
#pragma libcall RSABase RSA_padding_check_PKCS1_OAEP 0d8 3a2190807
#pragma libcall RSABase RSA_padding_add_SSLv23 0de 190804
#pragma libcall RSABase RSA_padding_check_SSLv23 0e4 2190805
#pragma libcall RSABase RSA_padding_add_none 0ea 190804
#pragma libcall RSABase RSA_padding_check_none 0f0 2190805
#pragma libcall RSABase RSA_get_ex_new_index 0f6 ba98005
#pragma libcall RSABase RSA_set_ex_data 0fc 90803
#pragma libcall RSABase RSA_get_ex_data 102 0802
#pragma libcall RSABase ERR_load_RSA_strings 108 00

#endif /* PRAGMAS_RSA_PRAGMAS_H */
