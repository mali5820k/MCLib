#ifndef mclib_dictionary_h
#define mclib_dictionary_h

#include "var_types.h"

#define dict_threshold_percentage 75

typedef struct mclib_key_value_pair {
    bool in_use;
    var key;
    var value;
} kv_pair;

typedef struct mclib_dict {
    kv_pair *pairs;
    int max_size;
    int current_capacity;
} dict;

// make kv_pair
kv_pair new_kv_pair(var key, var value);
// hash function
int64_t hash_function1(kv_pair pair, int64_t max_dict_length);
bool rebalance_dictionary(dict *dictionary);
kv_pair get_kv_pair_by_key(dict *dictionary, var key);
bool remove_kv_pair_by_key(dict *dictionary, var key);
bool remove_kv_pair(dict *dictionary, kv_pair kv);
bool insert_kv_pair_raw(dict *dictionary, var key, var value);
bool insert_kv_pair(dict *dictionary, kv_pair kv);
bool 



#endif