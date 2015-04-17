#pragma once

struct utsname
{
#if defined(__linux__)
#  define N 65
#elif defined(__FreeBSD__)
#  define N 32
#else
#  error
#endif
    char    sysname[N];
    char   nodename[N];
    char    release[N];
    char    version[N];
    char    machine[N];
    char domainname[N];
#undef N
};