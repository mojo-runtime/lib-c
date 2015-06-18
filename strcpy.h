#pragma once

#include <feature/__has_builtin_strcpy.h>

static inline
char*
strcpy(char* target, const char* source)
{
#if __has_builtin_strcpy
    return __builtin_strcpy(target, source);
#else
#  error
#endif
}
