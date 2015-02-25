#ifndef compiler_has_cxx_contextual_conversions
#  ifdef __has_feature
#    define compiler_has_cxx_contextual_conversions __has_feature(cxx_contextual_conversions)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_contextual_conversions has_gcc_minor(4, 9)
#  else
#    error todo
#  endif
#endif