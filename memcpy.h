#pragma once

#include "size_t.h"

static inline
void*
memcpy(void* target, const void* source, size_t count)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wold-style-cast"

    char* target8 = (char*)target;
    char* source8 = (char*)source;

#pragma clang diagnostic pop

    --target8;
    --source8;

    while (count--) {
        *++target8 = *++source8;
    }

    return target;
}
