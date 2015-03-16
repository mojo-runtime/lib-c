#pragma once

#if defined(__unix__)
#  include "EOF.h"
#  include "STDOUT_FILENO.h"
#  include "SYS_write.h"
#  include "alloca.h"
#  include "memcpy.h"
#  include "strlen.h"
#  include "__nothrow.h"
#  include "__reinterpret_cast.h"
#  include "__syscall3.h"
#  include "__Result_is_error.h"

__nothrow
static inline
int
puts(const char* string)
{
    __Word
    string_length = strlen(string);

    __Word
    length = string_length + 1;

    void*
    data = alloca(length);

    memcpy(data, string, string_length);

    __reinterpret_cast(char*, data)[string_length] = '\n';

    return __Result_is_error(
        __syscall3(
            SYS_write,
            STDOUT_FILENO,
            data,
            length
        )
    ) ? EOF : 1; // nonnegative number on success
}

#else
#  error
#endif
