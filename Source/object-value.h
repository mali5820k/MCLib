#ifndef mclib_object_value_h
#define mclib_object_value_h

#include "enum.h"

typedef struct mclib_object_value {
    Enum obj_type;
    void* object;
} obj_value;

#endif