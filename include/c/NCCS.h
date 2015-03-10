#ifndef NCCS

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define NCCS 19
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define NCCS 20
#else
#  error
#endif

#endif