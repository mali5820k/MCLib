#ifndef mclib_strings_h
#define mclib_strings_h

#include "mclib_common.h"
#include "lists.h"

typedef struct mclib_string {
    char *contents;
    int64_t length;
    int64_t max_characters;
} string;

char getChar(int64_t index);
char* toCString(string astring);
string toString(char *astring);

// Later on can add substring support:
// string subString(int64_t, int64_t) // From index, to index (inclusive)


#endif