#include<stdbool.h>
#ifndef QUEUE_H
#define QUEUE_H

typedef int ITEM;
typedef struct queue_t *Queue;

void queue_insert(Queue, Item i);
void queue_remove(Queue);
int queue_first_return(Queue);
int queue_last_return(Queue);
bool queue_is_empty(Queue);

#endif
