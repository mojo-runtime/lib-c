#pragma once

#include "c/EBADF.h"
#include "c/EINVAL.h"
#include "c/SYS_inotify_rm_watch.h"

#include "Result.hxx"

namespace linux {

static inline
auto
inotify_rm_watch(int fd, int wd) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EBADF),
        _(EINVAL),
#undef _
    };

    return Result<void, Error>(SYS_inotify_rm_watch, fd, wd);
}

}
