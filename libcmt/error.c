/*
 * Portable ISO 'C' (1994) runtime library for the Amiga computer
 * Copyright (c) 2002-2005 by Olaf Barthel <olsen@sourcery.han.de>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   - Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 *   - Neither the name of Olaf Barthel nor the names of contributors
 *     may be used to endorse or promote products derived from this
 *     software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <errno.h>
#include <string.h>
#include <dos/errors.h>

int __io2errno(int io_err)
{
	static const struct { LONG io_err; LONG errno; } map_table[] =
	{
		{ ERROR_NO_FREE_STORE,			ENOMEM },
		{ ERROR_TASK_TABLE_FULL,		ENOMEM },
		{ ERROR_BAD_TEMPLATE,			EINVAL },
		{ ERROR_BAD_NUMBER,				EINVAL },
		{ ERROR_REQUIRED_ARG_MISSING,	EINVAL },
		{ ERROR_KEY_NEEDS_ARG,			EINVAL },
		{ ERROR_TOO_MANY_ARGS,			EINVAL },
		{ ERROR_UNMATCHED_QUOTES,		EINVAL },
		{ ERROR_LINE_TOO_LONG,			ENAMETOOLONG },
		{ ERROR_FILE_NOT_OBJECT,		ENOEXEC },
		{ ERROR_OBJECT_IN_USE,			EBUSY },
		{ ERROR_OBJECT_EXISTS,			EEXIST },
		{ ERROR_DIR_NOT_FOUND,			ENOENT },
		{ ERROR_OBJECT_NOT_FOUND,		ENOENT },
		{ ERROR_BAD_STREAM_NAME,		EINVAL },
		{ ERROR_OBJECT_TOO_LARGE,		EFBIG },
		{ ERROR_ACTION_NOT_KNOWN,		ENOSYS },
		{ ERROR_INVALID_COMPONENT_NAME,	EINVAL },
		{ ERROR_INVALID_LOCK,			EBADF },
		{ ERROR_OBJECT_WRONG_TYPE,		EFTYPE },
		{ ERROR_DISK_NOT_VALIDATED,		EROFS },
		{ ERROR_DISK_WRITE_PROTECTED,	EROFS },
		{ ERROR_RENAME_ACROSS_DEVICES,	EXDEV },
		{ ERROR_DIRECTORY_NOT_EMPTY,	ENOTEMPTY },
		{ ERROR_TOO_MANY_LEVELS,		ENAMETOOLONG },
		{ ERROR_DEVICE_NOT_MOUNTED,		ENXIO },
		{ ERROR_COMMENT_TOO_BIG,		ENAMETOOLONG },
		{ ERROR_DISK_FULL,				ENOSPC },
		{ ERROR_DELETE_PROTECTED,		EACCES },
		{ ERROR_WRITE_PROTECTED,		EACCES },
		{ ERROR_READ_PROTECTED,			EACCES },
		{ ERROR_NOT_A_DOS_DISK,			EFTYPE },
		{ ERROR_NO_DISK,				EACCES },
		{ ERROR_IS_SOFT_LINK,			EFTYPE },
		{ ERROR_BAD_HUNK,				ENOEXEC },
		{ ERROR_NOT_IMPLEMENTED,		ENOSYS },
		{ ERROR_LOCK_COLLISION,			EACCES },
		{ ERROR_BREAK,					EINTR },
		{ ERROR_NOT_EXECUTABLE,			ENOEXEC }
	};

	unsigned int i;
	int result;

	result = EIO;

	for(i = 0 ; i < sizeof(map_table) / sizeof(map_table[0]) ; i++)
	{
		if(map_table[i].io_err == io_err)
		{
			result = map_table[i].errno;
			break;
		}
	}

	return(result);
}

/****************************************************************************/

char *
strerror(int error_number)
{
	const char *result;

	switch(error_number)
	{
		#ifdef EPERM
		case EPERM: result = "Operation not permitted"; break;
		#endif /* EPERM */
		#ifdef ENOENT
		case ENOENT: result = "No such file or directory"; break;
		#endif /* ENOENT */
		#ifdef ESRCH
		case ESRCH: result = "No such process"; break;
		#endif /* ESRCH */
		#ifdef EINTR
		case EINTR: result = "Interrupted system call"; break;
		#endif /* EINTR */
		#ifdef EIO
		case EIO: result = "Input/output error"; break;
		#endif /* EIO */
		#ifdef ENXIO
		case ENXIO: result = "Device not configured"; break;
		#endif /* ENXIO */
		#ifdef ENOEXEC
		case ENOEXEC: result = "Exec format error"; break;
		#endif /* ENOEXEC */
		#ifdef EBADF
		case EBADF: result = "Bad file descriptor"; break;
		#endif /* EBADF */
		#ifdef ECHILD
		case ECHILD: result = "No child processes"; break;
		#endif /* ECHILD */
		#ifdef EDEADLK
		case EDEADLK: result = "Resource deadlock avoided"; break;
		#endif /* EDEADLK */
		#ifdef ENOMEM
		case ENOMEM: result = "Cannot allocate memory"; break;
		#endif /* ENOMEM */
		#ifdef EACCES
		case EACCES: result = "Permission denied"; break;
		#endif /* EACCES */
		#ifdef EFAULT
		case EFAULT: result = "Bad address"; break;
		#endif /* EFAULT */
		#ifdef ENOTBLK
		case ENOTBLK: result = "Block device required"; break;
		#endif /* ENOTBLK */
		#ifdef EBUSY
		case EBUSY: result = "Device busy"; break;
		#endif /* EBUSY */
		#ifdef EEXIST
		case EEXIST: result = "File exists"; break;
		#endif /* EEXIST */
		#ifdef EXDEV
		case EXDEV: result = "Cross-device link"; break;
		#endif /* EXDEV */
		#ifdef ENODEV
		case ENODEV: result = "Operation not supported by device"; break;
		#endif /* ENODEV */
		#ifdef ENOTDIR
		case ENOTDIR: result = "Not a directory"; break;
		#endif /* ENOTDIR */
		#ifdef EISDIR
		case EISDIR: result = "Is a directory"; break;
		#endif /* EISDIR */
		#ifdef EINVAL
		case EINVAL: result = "Invalid argument"; break;
		#endif /* EINVAL */
		#ifdef ENFILE
		case ENFILE: result = "Too many open files in system"; break;
		#endif /* ENFILE */
		#ifdef EMFILE
		case EMFILE: result = "Too many open files"; break;
		#endif /* EMFILE */
		#ifdef ENOTTY
		case ENOTTY: result = "Inappropriate ioctl for device"; break;
		#endif /* ENOTTY */
		#ifdef ETXTBSY
		case ETXTBSY: result = "Text file busy"; break;
		#endif /* ETXTBSY */
		#ifdef EFBIG
		case EFBIG: result = "File too large"; break;
		#endif /* EFBIG */
		#ifdef ENOSPC
		case ENOSPC: result = "No space left on device"; break;
		#endif /* ENOSPC */
		#ifdef ESPIPE
		case ESPIPE: result = "Illegal seek"; break;
		#endif /* ESPIPE */
		#ifdef EROFS
		case EROFS: result = "Read-only file system"; break;
		#endif /* EROFS */
		#ifdef EMLINK
		case EMLINK: result = "Too many links"; break;
		#endif /* EMLINK */
		#ifdef EPIPE
		case EPIPE: result = "Broken pipe"; break;
		#endif /* EPIPE */
		#ifdef EDOM
		case EDOM: result = "Numerical argument out of domain"; break;
		#endif /* EDOM */
		#ifdef ERANGE
		case ERANGE: result = "Result too large"; break;
		#endif /* ERANGE */
		#ifdef EAGAIN
		case EAGAIN: result = "Resource temporarily unavailable"; break;
		#endif /* EAGAIN */
		#if defined(EWOULDBLOCK) && (EWOULDBLOCK != EAGAIN)
		case EWOULDBLOCK: result = "Operation would block"; break;
		#endif /* EWOULDBLOCK */
		#ifdef EINPROGRESS
		case EINPROGRESS: result = "Operation now in progress"; break;
		#endif /* EINPROGRESS */
		#ifdef EALREADY
		case EALREADY: result = "Operation already in progress"; break;
		#endif /* EALREADY */
		#ifdef ENOTSOCK
		case ENOTSOCK: result = "Socket operation on non-socket"; break;
		#endif /* ENOTSOCK */
		#ifdef EDESTADDRREQ
		case EDESTADDRREQ: result = "Destination address required"; break;
		#endif /* EDESTADDRREQ */
		#ifdef EMSGSIZE
		case EMSGSIZE: result = "Message too long"; break;
		#endif /* EMSGSIZE */
		#ifdef EPROTOTYPE
		case EPROTOTYPE: result = "Protocol wrong type for socket"; break;
		#endif /* EPROTOTYPE */
		#ifdef ENOPROTOOPT
		case ENOPROTOOPT: result = "Protocol not available"; break;
		#endif /* ENOPROTOOPT */
		#ifdef EPROTONOSUPPORT
		case EPROTONOSUPPORT: result = "Protocol not supported"; break;
		#endif /* EPROTONOSUPPORT */
		#ifdef ESOCKTNOSUPPORT
		case ESOCKTNOSUPPORT: result = "Socket type not supported"; break;
		#endif /* ESOCKTNOSUPPORT */
		#ifdef EOPNOTSUPP
		case EOPNOTSUPP: result = "Operation not supported on socket"; break;
		#endif /* EOPNOTSUPP */
		#ifdef EPFNOSUPPORT
		case EPFNOSUPPORT: result = "Protocol family not supported"; break;
		#endif /* EPFNOSUPPORT */
		#ifdef EAFNOSUPPORT
		case EAFNOSUPPORT: result = "Address family not supported by protocol family"; break;
		#endif /* EAFNOSUPPORT */
		#ifdef EADDRINUSE
		case EADDRINUSE: result = "Address already in use"; break;
		#endif /* EADDRINUSE */
		#ifdef EADDRNOTAVAIL
		case EADDRNOTAVAIL: result = "Can't assign requested address"; break;
		#endif /* EADDRNOTAVAIL */
		#ifdef ENETDOWN
		case ENETDOWN: result = "Network is down"; break;
		#endif /* ENETDOWN */
		#ifdef ENETUNREACH
		case ENETUNREACH: result = "Network is unreachable"; break;
		#endif /* ENETUNREACH */
		#ifdef ENETRESET
		case ENETRESET: result = "Network dropped connection on reset"; break;
		#endif /* ENETRESET */
		#ifdef ECONNABORTED
		case ECONNABORTED: result = "Software caused connection abort"; break;
		#endif /* ECONNABORTED */
		#ifdef ECONNRESET
		case ECONNRESET: result = "Connection reset by peer"; break;
		#endif /* ECONNRESET */
		#ifdef ENOBUFS
		case ENOBUFS: result = "No buffer space available"; break;
		#endif /* ENOBUFS */
		#ifdef EISCONN
		case EISCONN: result = "Socket is already connected"; break;
		#endif /* EISCONN */
		#ifdef ENOTCONN
		case ENOTCONN: result = "Socket is not connected"; break;
		#endif /* ENOTCONN */
		#ifdef ESHUTDOWN
		case ESHUTDOWN: result = "Can't send after socket shutdown"; break;
		#endif /* ESHUTDOWN */
		#ifdef ETOOMANYREFS
		case ETOOMANYREFS: result = "Too many references: can't splice"; break;
		#endif /* ETOOMANYREFS */
		#ifdef ETIMEDOUT
		case ETIMEDOUT: result = "Connection timed out"; break;
		#endif /* ETIMEDOUT */
		#ifdef ECONNREFUSED
		case ECONNREFUSED: result = "Connection refused"; break;
		#endif /* ECONNREFUSED */
		#ifdef ELOOP
		case ELOOP: result = "Too many levels of symbolic links"; break;
		#endif /* ELOOP */
		#ifdef ENAMETOOLONG
		case ENAMETOOLONG: result = "File name too long"; break;
		#endif /* ENAMETOOLONG */
		#ifdef EHOSTDOWN
		case EHOSTDOWN: result = "Host is down"; break;
		#endif /* EHOSTDOWN */
		#ifdef EHOSTUNREACH
		case EHOSTUNREACH: result = "No route to host"; break;
		#endif /* EHOSTUNREACH */
		#ifdef ENOTEMPTY
		case ENOTEMPTY: result = "Directory not empty"; break;
		#endif /* ENOTEMPTY */
		#ifdef EPROCLIM
		case EPROCLIM: result = "Too many processes"; break;
		#endif /* EPROCLIM */
		#ifdef EUSERS
		case EUSERS: result = "Too many users"; break;
		#endif /* EUSERS */
		#ifdef EDQUOT
		case EDQUOT: result = "Disc quota exceeded"; break;
		#endif /* EDQUOT */
		#ifdef ESTALE
		case ESTALE: result = "Stale NFS file handle"; break;
		#endif /* ESTALE */
		#ifdef EREMOTE
		case EREMOTE: result = "Too many levels of remote in path"; break;
		#endif /* EREMOTE */
		#ifdef EBADRPC
		case EBADRPC: result = "RPC struct is bad"; break;
		#endif /* EBADRPC */
		#ifdef ERPCMISMATCH
		case ERPCMISMATCH: result = "RPC version wrong"; break;
		#endif /* ERPCMISMATCH */
		#ifdef EPROGUNAVAIL
		case EPROGUNAVAIL: result = "RPC prog. not avail"; break;
		#endif /* EPROGUNAVAIL */
		#ifdef EPROGMISMATCH
		case EPROGMISMATCH: result = "Program version wrong"; break;
		#endif /* EPROGMISMATCH */
		#ifdef EPROCUNAVAIL
		case EPROCUNAVAIL: result = "Bad procedure for program"; break;
		#endif /* EPROCUNAVAIL */
		#ifdef ENOLCK
		case ENOLCK: result = "No locks available"; break;
		#endif /* ENOLCK */
		#ifdef ENOSYS
		case ENOSYS: result = "Function not implemented"; break;
		#endif /* ENOSYS */
		#ifdef EFTYPE
		case EFTYPE: result = "Inappropriate file type or format"; break;
		#endif /* EFTYPE */
		#ifdef EAUTH
		case EAUTH: result = "Authentication error."; break;
		#endif /* EAUTH */
		#ifdef ENEEDAUTH
		case ENEEDAUTH: result = "Need authenticator."; break;
		#endif /* ENEEDAUTH */
		#ifdef EIDRM
		case EIDRM: result = "Identifier removed."; break;
		#endif /* EIDRM */
		#ifdef ENOMSG
		case ENOMSG: result = "No message of the desired type."; break;
		#endif /* ENOMSG */
		#ifdef EOVERFLOW
		case EOVERFLOW: result = "Value too large to be stored in data type."; break;
		#endif /* EOVERFLOW */
		#ifdef EILSEQ
		case EILSEQ: result = "Encoding error detected"; break;
		#endif /* EILSEQ */

		default:
		{
			static char error_buffer[80];
			char number[30];
			char *s = number;
			int is_negative = 0;
			unsigned int n;
			int i,len,c;

			/* We convert the error number into in an unsigned
			   integer, so that numbers such as 0x80000000
			   can come out of the conversion. */
			if(error_number < 0)
			{
				is_negative = 1;

				n = (-error_number);
			}
			else
			{
				n = error_number;
			}

			/* Convert the error number into a string of digits. */
			len = 0;

			do
			{
				(*s++) = '0' + (n % 10);
				n /= 10;
				len++;
			}
			while(n > 0 && len < (int)sizeof(number)-1);

			/* Add the sign, if necessary. */
			if(is_negative && len < (int)sizeof(number)-1)
			{
				(*s++) = '-';
				len++;
			}

			(*s) = '\0';

			/* Reverse the string in place. */
			for(i = 0 ; i < len / 2 ; i++)
			{
				c				= number[len-1-i];
				number[len-1-i]	= number[i];
				number[i]		= c;
			}

			strcpy(error_buffer,"Unknown error ");
			strcat(error_buffer,number);

			result = error_buffer;
			break;
		}
	}

	return((char *)result);
}
