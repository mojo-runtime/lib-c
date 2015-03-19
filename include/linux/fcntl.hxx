#pragma once

#include <EACCES>
#include <EAGAIN>
#include <EBADF>
#include <EDEADLK>
#include <EFAULT>
#include <EINTR>
#include <EINVAL>
#include <EMFILE>
#include <ENOLCK>
#include <EPERM>

namespace linux::fcntl {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EAGAIN),
    _(EBADF),
    _(EDEADLK),
    _(EFAULT),
    _(EINTR),
    _(EINVAL),
    _(EMFILE),
    _(ENOLCK),
    _(EPERM),
#undef _
};

}