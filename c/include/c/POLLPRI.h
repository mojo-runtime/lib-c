#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define POLLPRI 0x2
#else
#  error
#endif