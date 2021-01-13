#ifndef STACK_H
#define STACK_H

#include<stdbool.h>

typedef struct stack *Stack;
typedef char ITEM;

Stack create(void);
void destroy(Stack);
void make_empty(Stack);
bool is_empty(const Stack);
bool is_full(const Stack);
void push(Stack, ITEM);
ITEM pop(Stack);

#endif
