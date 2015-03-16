#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define F_SETLKW 7
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define F_SETLKW 13
#else
#  error
#endif