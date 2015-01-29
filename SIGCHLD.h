#ifndef _c__SIGCHLD_h
#define _c__SIGCHLD_h

#include "c/alias/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SignalNumber
SIGCHLD =
#ifdef __linux__
#  ifdef __x86_64__
 17 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
