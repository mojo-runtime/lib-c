#ifndef _c__SYS_getpid_h
#define _c__SYS_getpid_h

#include "c/alias/SystemCallNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SystemCallNumber
SYS_getpid =
#ifdef __linux__
#  ifdef __x86_64__
 39
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
