#ifndef has_attribute_nothrow
#  ifdef __has_attribute
#    define has_attribute_nothrow __has_attribute(__nothrow__)
#  else
#    error todo
#  endif
#endif
