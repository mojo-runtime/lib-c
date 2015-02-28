#ifndef c_posix_Exit_h_
#define c_posix_Exit_h_

#include "compat/NOTHROW.h"
#include "compat/_Noreturn.h"
#include "compat/__builtin_unreachable.h"

#include "SYS_exit.h"
#include "_system_call_1.h"

_Noreturn
NOTHROW
static
void
_Exit(int status)
{
    _system_call_1(SYS_exit, status);
    __builtin_unreachable();
}

#endif
