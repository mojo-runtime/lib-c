#pragma once

#include <EAGAIN>
#include <EBADF>
#include <EDESTADDRREQ>
#include <EDQUOT>
#include <EFAULT>
#include <EFBIG>
#include <EINTR>
#include <EINVAL>
#include <EIO>
#include <ENOSPC>
#include <EPIPE>

namespace linux::write {

enum Error
{
#define _(name) _##name = name
    _(EAGAIN),
    _(EBADF),
    _(EDESTADDRREQ),
    _(EDQUOT),
    _(EFAULT),
    _(EFBIG),
    _(EINTR),
    _(EINVAL),
    _(EIO),
    _(ENOSPC),
    _(EPIPE),
    // "Other errors may occur, depending on the object connected to `fd`"…
#undef _
};

}