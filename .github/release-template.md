[![Downloads](https://img.shields.io/github/downloads/jens-maus/amissl/${VERSION}/total.svg)](https://github.com/jens-maus/amissl/releases/${VERSION}) [![License](https://img.shields.io/:license-Apache_2.0-blue.svg?style=flat)](https://www.apache.org/licenses/LICENSE-2.0) [![Donate](https://img.shields.io/badge/donate-PayPal-red.svg)](https://www.paypal.com/donate/?hosted_button_id=KSG49RVGY8AG2) [![X Follow](https://img.shields.io/twitter/follow/amigassl?style=social)](https://x.com/amigassl)

## About
This is version ${VERSION} of the open-source based AmiSSL library for Amiga based operating systems. AmiSSL v6 is a new major release using OpenSSL ${OSSLVERSION}. This includes important security related fixes, the latest new encryption ciphers and security features which are required to connect to modern TLS-based services such as HTTPS and SSH. It also has basic built-in HTTP(S) client.

## Changes
${CHANGELOG}

For details on all changes, see the [full commit log](https://github.com/jens-maus/amissl/compare/${PREVIOUS_TAG}...${VERSION}).

## Backwards Compatibility
All applications compiled to use previous versions of AmiSSL v6 automatically use any updates installed. Old applications will continue to use AmiSSL v5 or older and will need to be recompiled with the AmiSSL v6 SDK in order to start using it. Besides this difference, AmiSSL v6 can be installed on top of any previous AmiSSL versions, which ensures that applications compiled to use AmiSSL v1/v2/v3/v4/v5 continue to work.

## Requirements
AmigaOS 4.0+/PPC, AmigaOS 3.0+/68020+ or MorphOS

#### IMPORTANT NOTE
This release comes with binaries for the AmigaOS4/PPC and AmigaOS3/m68k platform only.  Unfortunately, due to lack of motivated developers we couldn't provide native binaries for the MorphOS/PPC or AROS (PPC, i386, x86_64) platform. If you are, however, interested in seeing AmiSSL v5 being ported to these other Amiga-based platforms, please try to find motivated and talented developers who join our team as maintainers for these alternative platforms. In addition, if you are a MorphOS or AROS developer yourself, feel free to send pull requests to see your platform supported in one of the next releases.

## Download
Please find the necessary OS specific installation archives and the developer SDK attached to this release below. The SHA256 checksums for the archives are:

```
${SHA256SUM}
```
