#ifndef PRAGMAS_BLOWFISH_PRAGMAS_H
#define PRAGMAS_BLOWFISH_PRAGMAS_H

#pragma libcall BlowFishBase BF_set_key 01e 90803
#pragma libcall BlowFishBase BF_encrypt 024 9802
#pragma libcall BlowFishBase BF_decrypt 02a 9802
#pragma libcall BlowFishBase BF_ecb_encrypt 030 0a9804
#pragma libcall BlowFishBase BF_cbc_encrypt 036 1ba09806
#pragma libcall BlowFishBase BF_cfb64_encrypt 03c 21ba09807
#pragma libcall BlowFishBase BF_ofb64_encrypt 042 1ba09806
#pragma libcall BlowFishBase BF_options 048 00

#endif /* PRAGMAS_BLOWFISH_PRAGMAS_H */
