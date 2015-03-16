#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_symlink 88
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_symlink 57
#else
#  error
#endif