[![Downloads](https://img.shields.io/github/downloads/jens-maus/amissl/${VERSION}/total.svg)](https://github.com/jens-maus/amissl/releases/${VERSION}) [![License](http://img.shields.io/:license-Apache_2.0-blue.svg?style=flat)](https://www.apache.org/licenses/LICENSE-2.0)

## About:
This is version ${VERSION} of the open-source based AmiSSL library for Amiga based operating systems. Version 4.x is a new major release which comes with full compatibility to the OpenSSL 1.1.x line which includes important security related fixes and comes with new encryption ciphers which are required nowadays to connect to modern SSL-based services (e.g.  HTTPS).

## :construction: Changes:
<sub>For all changes, see the [full commit log](https://github.com/jens-maus/amissl/compare/${PREVIOUS_TAG}...${VERSION}).</sub>

${CHANGELOG}

## Backwards Compatibility:
All applications compiled to use most previous versions of AmiSSLv4 will automatically use this latest version once installed. Unfortunately, due to some errors that were made in AmiSSL 4.3, applications compiled to specifically use AmiSSL 4.3 will need to be recompiled with the AmiSSL 4.4 SDK (or newer) in order for them to be able to use this latest version. Due to fundamental changes in the API between the old AmiSSLv3 and new v4 versions and the large changes between the old OpenSSL 0.9.x and the new OpenSSL 1.1.x line, applications have to be recompiled with the updated AmiSSL SDK to take full advantage of the modernized OpenSSL 1.1.x API. Besides that fundamental change, AmiSSLv4 can be installed on top of a AmiSSLv3 installation while still ensuring that applications compiled for AmiSSLv3 will continue to work properly.

## Requirements:
- AmigaOS 4.0+/PPC, AmigaOS 3.0+/68020+ or MorphOS

**IMPORTANT NOTE:**
This release comes with binaries for the AmigaOS4/PPC and AmigaOS3/m68k platform only.  Unfortunately, due to lack of motivated developers we couldn't provide native binaries for the MorphOS/PPC or AROS (PPC, i386, x86_64) platform. If you are, however, interested in seeing AmiSSL v4 being ported to these other Amiga-based platforms, please try to find motivated and talented developers who join our team as maintainers for these alternative platforms. In addition, if you are a MorphOS or AROS developer yourself, feel free to send pull requests to see your platform supported in one of the next releases.

Please find the necessary installation archive as a lha archive file attached to this release. The SHA256 checksum for it is:

```
XXXX PUT SHA256SUM HERE!
```
