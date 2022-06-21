## AmiSSL 5.2 (21.6.2022)

- Updated OpenSSL backend to full compatibility with the latest
  OpenSSL 3.0.4 (21.6.2022) version, which brings security, memory leak
  and other bug fixes.

## AmiSSL 5.1 (21.5.2022)

- Switched to OpenSSL 3.0 and updated backend to full compatibility with
  the latest OpenSSL 3.0.3 (3.5.2022) version, which brings new features,
  such as a built-in HTTP(S) client, along with security and bug fixes.
- Updated root certificates to latest Mozilla-based bundle provided
  by https://curl.se/docs/caextract.html dated 26.4.2022.
- Split AmiSSL release archive into smaller OS specific and SDK archives.
- OpenSSL tool now has a proper $VER string, with the version number
  matching the AmiSSL release version number.
- Fixed OpenSSL UI function m68k/ppc crosscalls, reinstating code from
  AmiSSL v3, that was unfortunately removed in AmiSSL v4.
- Added new streamlined OpenAmiSSLTags/TagList() function to
  amisslmaster.library which simplifies the opening of AmiSSL.
- Added simple httpget example code which shows how applications can use
  the new built-in HTTP(S) client.
- Added full autodocs for all the Amiga specific interface functions.
- Improved and structured the developer README-SDK file.
- Added OpenSSL stub link libraries for OS3 (GCC) and OS4 (GCC & VBCC).
- AmiSSL and OpenSSL switched to the Apache License, Version 2.0.
- We have a new homepage at https://amissl.org which provides links to all
  AmiSSL resources, old and new.

## AmiSSL 4.12 (11.2.2022)

- Updated OpenSSL backend to full compatibility to latest
  OpenSSL 1.1.1m (14.12.2021) version, which brings security and bug fixes.
- Updated root certificates to latest Mozilla-based bundle provided
  by https://curl.se/docs/caextract.html dated 1.2.2022.
- Fixed RSA_X931_derive_ex() from not being reachable on OS3.
- Fixed crash after OpenSSL fatal error message requester shown.
- Cleaned up and unified error requesters, removing redundant code.
- Fixed GCC linker alignment for all OS4 binaries.

## AmiSSL 4.11 (30.10.2021)

- Updated root certificates to latest Mozilla-based bundle provided
  by https://curl.se/docs/caextract.html dated 26.10.2021.
- Legacy entropy generation is now faster on OS3 machines, with the
  removal of delays caused by using the vblank timer, which typically
  causes AmiSSL to initialise 2 seconds faster (#57).
- Fixed legacy entropy generation to correctly use an entropy factor of 4,
  as originally intended, which was broken since AmiSSL 4.3 (#57).
- Entropy generation now uses SHA-256 instead of SHA-1.
- Tweaked OS4 memory allocations to not be locked.
- Fixed issues when redirecting OpenSSL tool output to a file (#58).
- Added Ctrl-C break detection to the OpenSSL tool.
- OS4 binaries now stripped further with --strip-unneeded-rel-relocs.

## AmiSSL 4.10 (25.8.2021)

- Updated OpenSSL backend to full compatibility to latest
  OpenSSL 1.1.1l (24.08.2021) version, which brings security and bug
  fixes, including:
  + Fixed an SM2 Decryption Buffer Overflow (CVE-2021-3711).
  + Fixed various read buffer overruns processing ASN.1 strings
    (CVE-2021-3712).
- Updated root certificates to latest Mozilla-based bundle provided
  by https://curl.haxx.se/ca/ dated 05.07.2021.
- Added Italian installer translation.

## AmiSSL 4.9 (2.4.2021)

- Updated OpenSSL backend to full compatibility to latest
  OpenSSL 1.1.1k (25.03.2021) version, which brings security and bug fixes.
- Simplified and improved logic in amisslmaster.library for choosing which
  libraries to open.
- Installer will now delete redundant AmiSSL v4 libraries where possible.
- Added Swedish installer translation.
- Updated icons with more modern GlowIcons.
- Added sample openssl.cnf file and CA.pl helper script to the installation.
- Added CA.pl documentation to OpenSSL.doc.

## AmiSSL 4.8 (13.3.2021)

- Updated OpenSSL backend to full compatibility to latest
  OpenSSL 1.1.1j (16.02.2021) version, which brings security and bug fixes.
- Updated root certificates to latest Mozilla-based bundle provided
  by https://curl.se/docs/caextract.html.
- Fixed corrupted OS3 libamisslauto.a (object name was too long).
- Tweaked SDK examples and OpenSSL includes to be more compatible with
  vanilla VBCC and SAS/C compiler installations.
- Restored SAS/C support to AmiSSL autoopen link library code.
- Added native VBCC support to AmiSSL autoopen link library code.
- Added lib/autoinit_amissl_main.c to SDK to allow VBCC, SAS/C and GCC
  users to compile their own link library, if required.

## AmiSSL 4.7 (17.12.2020)

- Updated OpenSSL backend to full compatibility to latest
  OpenSSL 1.1.1i (08.12.2020) version, which brings security and bug fixes.
- Updated root certificates to latest Mozilla-based bundle provided
  by https://curl.haxx.se/ca/
- Fixed OpenSSL command and https developer example not having execute file
  permission bit set on OS3

## AmiSSL 4.6 (8.6.2020)

- Updated OpenSSL backend to full compatibility to latest
  OpenSSL 1.1.1g (21.04.2020) version, which brings security and bug fixes.
- Tweaks to allow and force Amithlon to use the 68060 target, due to 64-bit
  integer math emulation being broken in Amithlon (68080 and MorphOS should
  continue to use the more optimal 68020-40 target).

## AmiSSL 4.5 (29.3.2020)

- Dropped FPU usage from 68060 target, allowing 68LC060 and 68EC060
  processors to benefit from the 4.4 changes, without crashing.
- Fixed a number of memory leaks, particularly where multithreaded
  applications would leak memory over time (although freed on exit).
- All binaries now stripped of debug symbols, improving load time.
- Fixed installer issue for MorphOS (#43).
- Modernized and improved the https example source code.
- Minor improvements/fixes.

## AmiSSL 4.4 (15.2.2020)

- Updated OpenSSL backend to full compatibility to latest
  OpenSSL 1.1.1d (10.09.2019) version.
- Applications compiled with the AmiSSL 4.3 SDK will need to be recompiled
  to use this release (if the AmiSSL 4.0-4.2 SDK was used, those applications
  do not need recompiling and will automatically use AmiSSL 4.4).
- Updated root certificates to latest Mozilla-based bundle provided
  by https://curl.haxx.se/ca/
- Now includes separate 68020-40 and 68060 optimised versions.
- Fixed poor 64-bit integer math performance (including erratic mouse
  movement) specific to 68060 processors, caused by software emulation of
  instructions not present on 68060 processors.
- Added 68060 optimised 64-bit multiplication routine from vbcc with
  permission by Frank Wille.
- Improved BN performance for 68060 (disabled m68k asm replacement as it's
  slower due to the above).
- Improved elliptic curve performance for all m68k processors.
- Fixed the OS3 target from crashing on systems with a 68020/030, but
  without an FPU (#37).
- Disabled Poly1305 FPU algorithm on Tabor A1222 (#38).
- Fixed TLS 1.3 cipher lookup failures on OS4, caused by compiler bug (#35).
- OpenSSL.doc not updated for the last 14 years, but now automatically
  updated for each new release.
- Fixed crashing OpenSSL command on OS3 (#28).
- Fixed OpenSSL command not making path to openssl.cnf correctly (#34).
- Fixed OpenSSL command -out parameter (#33).
- OpenSSL s_server command can now be interrupted with Ctrl-C.
- Install script fixes for MorphOS (#41).
- Fixed include files for vbcc/m68k compilation (#20).
- LhA release archive now packed using an older header level for better
  compatibility with some Amiga unpackers.
- Minor improvements/fixes.

## AmiSSL 4.3 (21.2.2019):

- Updated OpenSSL backend to latest OpenSSL 1.1.1a (20.11.2018) version
  including newest TLS 1.2 and TLS 1.3 protocol/cipher versions and general
  compatibility.
- Updated root certificates to latest Mozilla-based bundle provided
  by https://curl.haxx.se/ca/
- Minor improvements/fixes.

## AmiSSL 4.2 (7.3.2018)

- Updated OpenSSL backend to full compatibility to latest
  OpenSSL 1.1.0g (02.11.2017) version.
- Updated root certificates to latest Mozilla-based bundle provided
  by https://curl.haxx.se/ca/
- Fixed https.c example cleanup code for non-OS4 targets (#18)
- Reinstated AmigaOS multithreading support and semaphore protection, using
  the new thread API introduced in OpenSSL 1.1.0 (#17)
- Include `ppcinline/macros.h` which contains all `LPXX()` macros to use the
  AmiSSL includes for MorphOS.
- Minor improvements/fixes.

## AmiSSL 4.1 (13.3.2017)

- Updated OpenSSL backend to full compatibility to latest
  OpenSSL 1.1.0e (16.02.2017) version.
- MorphOS can now be selected as an install target with the OS3/m68k version
  being installed. For a native PPC version we would require some work to be
  done by some talented MorphOS developers.
- Added some m68k asm replacement code for potentially speeding up BN
  calculation routines.
- Added AmiUpdate compatibility.
- Included a newlib compiled version of libamisslauto.a.
- Minor improvements/Fixes for install script.

## AmiSSL 4.0 (7.2.2017)

- Updated OpenSSL backend to full compatibility to latest
  OpenSSL 1.1.0d (26 Jan 2017) version.
- Updated root certificate bundle to latest Mozilla-based bundle
  provided by https://curl.haxx.se/ca/
- Removed whole IsCipherAvailable() API and reenabled IDEA, MDC2 and RC5
  ciphers as the protecting patents have expired during 2012 and 2015.
- Enabled all PPC ASM optimizations in OpenSSL.
- Switched build system to exclusively use GCC-based cross compilers for all
  platforms using proper baserel support for using the amissl shared library
  in a multi-application environment.

## AmiSSL 3.7 (2.4.2006)

- Fixed a problem in amisslmaster.library where init and cleanup routines
  might not get called a matching number of times.
- The expunge routine for amissl.library was cleaning up all currently hashed
  states, which is fine, but the pool from which these states were allocated
  was long gone at that time causing spectacular fireworks. Removed the
  cleanup from expunge routine and restored the one from close routine, but
  changed it to free only those states that belong to it (bug #2988).
- The 68k version now uses modified SAS/C libinit code which calls
  CacheClearE() instead of CacheClearU() to improve performance.

## AmiSSL 3.6 (4.3.2006)

- The close routine for amissl.library was cleaning up all currently hashed
  states, including those belonging to other openers of the library. This
  could lead to a crash when two programs were using AmiSSL (bug #2960).

## AmiSSL 3.5 (14.6.2005)

- First v3 release, port of OpenSSL 0.9.7g.

## AmiSSL 2.2 (22.10.2002)

- First v2 release.
- Added amisslmaster.library and new API.

## AmiSSL 1.1 (31.7.2001)

- Minor upgrade which fixes a bug in amissl.library.
- Installation script included.

## AmiSSL 1.0 (31.8.1999)

- Started this madness.
