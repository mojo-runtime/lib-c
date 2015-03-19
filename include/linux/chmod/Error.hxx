#pragma once

#include <EACCES>
#include <EFAULT>
#include <EIO>
#include <ELOOP>
#include <ENAMETOOLONG>
#include <ENOENT>
#include <ENOMEM>
#include <ENOTDIR>
#include <EPERM>
#include <EROFS>

namespace linux::chmod {

enum Error
{
#define _(name) _##name = name
    _(EACCES),
    _(EFAULT),
    _(EIO),
    _(ELOOP),
    _(ENAMETOOLONG),
    _(ENOENT),
    _(ENOMEM),
    _(ENOTDIR),
    _(EPERM),
    _(EROFS),
#undef _
};

}