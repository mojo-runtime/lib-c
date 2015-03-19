#pragma once

#include <EAGAIN>
#include <EBADF>
#include <EFAULT>
#include <EINTR>
#include <EINVAL>
#include <EIO>
#include <EISDIR>

namespace linux::read {

enum Error
{
#define _(name) _##name = name
    _(EAGAIN),
    _(EBADF),
    _(EFAULT),
    _(EINTR),
    _(EINVAL),
    _(EIO),
    _(EISDIR),
    // "Other errors may occur, depending on the object connected to `fd`."…
#undef _
};

}