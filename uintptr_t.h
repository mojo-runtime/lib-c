#ifndef c_uintptr_t_h_
#define c_uintptr_t_h_

typedef
#ifdef __UINTPTR_TYPE__
__UINTPTR_TYPE__
#else
#  error
#endif
uintptr_t;

#endif
