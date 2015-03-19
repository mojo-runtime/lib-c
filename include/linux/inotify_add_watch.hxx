#pragma once

#include <EACCES>
#include <EBADF>
#include <EFAULT>
#include <EINVAL>
#include <ENAMETOOLONG>
#include <ENOENT>
#include <ENOMEM>
#include <ENOSPC>

namespace linux::inotify_add_watch {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EBADF),
    _(EFAULT),
    _(EINVAL),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ENOMEM),
    _(ENOSPC),
#undef _
};

}