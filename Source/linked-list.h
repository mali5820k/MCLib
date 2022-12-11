#ifndef mclib_linked_list_h
#define mclib_linked_list_h

#include "mclib_common.h"
#include "object-value.h"

typedef struct mclib_node {
    int64_t list_count;
    //bool is_head, is_tail; // Optional: uncomment if needed.
    struct node *prev;
    struct node *next;
    obj_value *object;
} node;

node *new_linked_list();
node *pop_node(node *linked_list_head, node *target_node);
node *pop_node_at_index(node *linked_list_head, int64_t index);
bool *remove_node(node *linked_list_head, node *target_node);
bool *remove_node_at_index(node *linked_list-head, node *target_node, int64_t index);
bool *insert_node_at_index(node *linked_list_head, node *target_node, int64_t index);
bool *insert_node(node *linked_list_head, node *target_node);
bool *append_node(node *linked_list_head, node *target_node);
bool delete(node *linked_list_head); // If not object is not null, then return false since user is responsible for freeing object memory in node.


#endif