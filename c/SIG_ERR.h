#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "sighandler_t.h"
#  define SIG_ERR ((sighandler_t)-1)
#else
#  error
#endif