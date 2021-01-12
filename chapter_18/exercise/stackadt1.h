#ifndef STACKADT1
#define STACKADT1

#include<stdbool.h>

typedef struct stack *Stack;

void stack_overflow(void);
void stack_underflow(void);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char);
char pop(void);

#endif
