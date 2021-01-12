#ifndef STACKADT1
#define STACKADT1

#include<stdbool.h>

typedef struct stack *Stack;
typedef int ITEM;

void terminate(const char *);
Stack create(void);
void destroy(Stack);
void make_empty(Stack);
bool is_empty(Stack);
bool is_full(Stack);
void push(Stack, ITEM);
char pop(Stack);

#endif
