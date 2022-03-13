[![Downloads](https://img.shields.io/github/downloads/jens-maus/amissl/${VERSION}/total.svg)](https://github.com/jens-maus/amissl/releases/${VERSION}) [![Commits since last release](https://img.shields.io/github/commits-since/jens-maus/amissl/${PREVIOUS_TAG}.svg)](https://github.com/jens-maus/amissl/releases/$(VERSION)) [![License](http://img.shields.io/:license-Apache_2.0-blue.svg?style=flat)](https://www.apache.org/licenses/LICENSE-2.0)

## About:
This is version ${VERSION} of the open-source based AmiSSL library for Amiga based operating systems. Version 5.x is a new major release which comes with full compatibility to the OpenSSL 3.0 line which includes important security related fixes, a built-in HTTP(S) client and comes with new encryption ciphers which are required nowadays to connect to modern SSL-based services such as HTTPS and SSH.

## :construction: Changes:
<sub>For all changes, see the [full commit log](https://github.com/jens-maus/amissl/compare/${PREVIOUS_TAG}...${VERSION}).</sub>

${CHANGELOG}

## Backwards Compatibility:
All applications compiled to use previous versions of AmiSSL v5 will automatically use this latest version once installed. Only applications compiled for AmiSSL v4 that declared they do not reference public OpenSSL structures will automatically start using AmiSSL v5. Otherwise, old applications will continue to use AmiSSL v4 and will need to be recompiled with the updated SDK in order to start using AmiSSL v5. Besides this difference, AmiSSL v5 can be installed on top of any previous AmiSS versions, which ensures that applications compiled for AmiSSL v1/v2/v3/v4 will continue to work.

## Requirements:
- AmigaOS 4.0+/PPC, AmigaOS 3.0+/68020+ or MorphOS

**IMPORTANT NOTE:**
This release comes with binaries for the AmigaOS4/PPC and AmigaOS3/m68k platform only.  Unfortunately, due to lack of motivated developers we couldn't provide native binaries for the MorphOS/PPC or AROS (PPC, i386, x86_64) platform. If you are, however, interested in seeing AmiSSL v4 being ported to these other Amiga-based platforms, please try to find motivated and talented developers who join our team as maintainers for these alternative platforms. In addition, if you are a MorphOS or AROS developer yourself, feel free to send pull requests to see your platform supported in one of the next releases.

Please find the necessary installation archive as a lha archive file attached to this release. The SHA256 checksum for it is:

```
XXXX PUT SHA256SUM HERE!
```
