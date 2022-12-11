#ifndef mc_var_types_h
#define mc_var_types_h
#include "mclib_common.h"
#include "object-value.h"
#include "strings.h"
#include "enum.h"

/**
 * This library is meant for making C feel like a scripting language.
 * Hence, it's using 'var' to declare both singular variables and datastructures.
*/

// Basic datastructures and variable types for data encapsulation

// typedef enum mclib_var_type {
// 	int8, int16, int32, int64,
// 	uint8, uint16, uint32, uint64,
// 	float32, float64, string,
// 	character, 
// 	objectVal, list
// } var_type;

Enum mclib_var_type = {};

// Arrays need a function pointer to their own get methods to return the appropriate values in their 
// specific datatype's format.
typedef float (*getFValueAt)(int64_t);
typedef double (*getDValueAt)(int64_t);
typedef uint8_t (*getUI8ValueAt)(int64_t);
typedef uint16_t (*getUI16ValueAt)(int64_t);
typedef uint32_t (*getUI32ValueAt)(uint64_t);
typedef uint64_t (*getUI64ValueAt)(int64_t);

typedef int8_t (*getI8ValueAt)(int64_t);
typedef int16_t (*getI16ValueAt)(int64_t);
typedef int32_t (*getI32ValueAt)(int64_t);
typedef int64_t (*getI64ValueAt)(int64_t);
typedef char (*getCharValueAt)(int64_t);

typedef struct mc_var {
	var_type type;
	obj_value *value;
} var;

var_type getType(var value);
string toString(var value); // Returns string representation of value stored in data-type.


#define new_var(type, value) _Generic( (type), \

default: )

#endif
