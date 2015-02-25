#ifndef linux_c_exit_h_
#define linux_c_exit_h_

#include "compiler/noreturn.h"
#include "compiler/nothrow.h"
#include "compiler/unreachable.h"

#include "SYS_exit.h"
#include "_linux_syscall1.h"

compiler_noreturn
compiler_nothrow
static
void
_exit(int status)
{
    _linux_syscall1(SYS_exit, status);
    compiler_unreachable();
}

#endif