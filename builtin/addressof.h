#ifndef c_builtin_addressof_h_
#define c_builtin_addressof_h_

#include "config/has_builtin_addressof.h"

#if has_builtin_addressof
#  define addressof __builtin_addressof
#else
#  error
#endif

#endif
