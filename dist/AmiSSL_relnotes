AmiSSL 3.7 (2.4.2006)

- Fixed a problem in amisslmaster.library where init and cleanup routines
  might not get called a matching number of times.
- The expunge routine for amissl.library was cleaning up all currently hashed
  states, which is fine, but the pool from which these states were allocated was
  long gone at that time causing spectacular fireworks. Removed the cleanup from
  expunge routine and restored the one from close routine, but changed it to
  free only those states that belong to it (bug #2988).
- The 68k version now uses modified SAS/C libinit code which calls CacheClearE()
  instead of CacheClearU() to improve performance.

AmiSSL 3.6 (4.3.2006)

- The close routine for amissl.library was cleaning up all currently hashed
states, including those belonging to other openers of the library. This could
lead to a crash when two programs were using AmiSSL (bug #2960).


---- OS4.0 update #4 ---- 


AmiSSL 3.5 (14.6.2005)

- First v3 release, port of OpenSSL 0.9.7g.
