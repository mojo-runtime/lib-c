#ifndef _c__EOVERFLOW_h
#define _c__EOVERFLOW_h

#include "c/alias/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EOVERFLOW =
#ifdef __linux__
#  ifdef __x86_64__
 75 // generic
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
