#ifndef PRAGMAS_AES_PRAGMAS_H
#define PRAGMAS_AES_PRAGMAS_H

#pragma libcall AESBase AES_options 01e 00
#pragma libcall AESBase AES_set_encrypt_key 024 90803
#pragma libcall AESBase AES_set_decrypt_key 02a 90803
#pragma libcall AESBase AES_encrypt 030 a9803
#pragma libcall AESBase AES_decrypt 036 a9803
#pragma libcall AESBase AES_ecb_encrypt 03c 0a9804
#pragma libcall AESBase AES_cbc_encrypt 042 1ba09806
#pragma libcall AESBase AES_cfb128_encrypt 048 21ba09807
#pragma libcall AESBase AES_ofb128_encrypt 04e 1ba09806
#pragma libcall AESBase AES_ctr128_encrypt 054 b21a09807

#endif /* PRAGMAS_AES_PRAGMAS_H */
