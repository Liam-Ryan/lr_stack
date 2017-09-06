#ifndef STACK_LIBRARY_H
#define STACK_LIBRARY_H

#include <stdbool.h>

typedef struct lrstack_node lrstack_node;

//Pop will delete the stack node but the caller is responsible for free()-ing any data structures stored as value
//Will return void* of NULL if stack is empty so be sure to test if empty first if using 0 as a value.
void *lrstack_pop(lrstack_node **head);

//Returns a pointer to the value, be sure to make a copy for operations if you don't wish to corrupt the stack
void *lrstack_peek(lrstack_node **head);

void lrstack_push(lrstack_node **head, void *value);

bool lrstack_isEmpty(lrstack_node **head);

#endif