#ifndef mclib_lists_h
#define mclib_lists_h
#include "var_types.h"
#include "enum.h"

typedef struct mclib_list {
	var_type type;
	int64_t max_length;
	int64_t num_elements;
	void* elements;
} list;

int8_t getInt8(int64_t index);
int16_t getInt16(int64_t index);
int32_t getInt32(int64_t index);
int64_t getInt64(int64_t index);

uint8_t getUInt8(int64_t index);
uint16_t getUInt16(int64_t index);
uint32_t getUInt32(int64_t index);
uint64_t getUInt64(int64_t index);

float getFloat32(int64_t index);
double getDouble(int64_t index);


#endif