#pragma once

#include "EPOLLERR.h"
#include "EPOLLET.h"
#include "EPOLLHUP.h"
#include "EPOLLIN.h"
#include "EPOLLONESHOT.h"
#include "EPOLLOUT.h"
#include "EPOLLPRI.h"
#include "EPOLLRDBAND.h"
#include "EPOLLRDHUP.h"
#include "EPOLLRDNORM.h"
#include "EPOLLWAKEUP.h"
#include "EPOLLWRBAND.h"
#include "EPOLLWRNORM.h"
#include "EPOLL_CLOEXEC.h"
#include "EPOLL_CTL_ADD.h"
#include "EPOLL_CTL_DEL.h"
#include "EPOLL_CTL_MOD.h"
#include "epoll_data_t.h"
#include "struct-epoll_event.h"
// epoll_create
// epoll_create1
// epoll_ctl
// epoll_pwait
// epoll_wait