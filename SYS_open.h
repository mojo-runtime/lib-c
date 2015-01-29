#ifndef _c__SYS_open_h
#define _c__SYS_open_h

#include "c/alias/SystemCallNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SystemCallNumber
SYS_open =
#ifdef __linux__
#  ifdef __x86_64__
 2
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
