#ifndef mclib_enum_h
#define mclib_enum_h

#include "mclib_common.h"

typedef struct mclib_enum {
    string name;
    int64_t value;
} Enum;

typedef struct mclib_enum_scope {
    Enum *enums;
    int64_t max_length;
    int64_t current_capacity;
} enum_scope;

// Hash function
int64_t hashfunc1(const Enum *an_enum, int64_t max_length_of_table);

// Re-balance Hash table:


//

#endif