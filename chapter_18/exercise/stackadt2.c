#include<stdio.h>
#include<stdlib.h>
#include"stackadt2.h"

struct node{
	ITEM value;
	struct node *next;
};

struct stack{
	struct node *top;
};

void terminate(const char *message){
	printf("%s", message);
	exit(1);
}

Stack create(void){
	Stack s = malloc(sizeof(struct stack));
	if(s == NULL)
		terminate("No space.");
	s->top = NULL;
	return s;
}

void destroy(Stack s){
	make_empty(s);
	free(s);
}

void make_empty(Stack s){
	while(!is_empty(s))
		pop(s);
}

bool is_empty(Stack s){
	return s == NULL;
}

bool is_full(Stack s){
	return false;
}

void push(Stack s, ITEM i){
	if(!is_full(s))
		terminate("No space.");
	
	struct node *new_node = malloc(sizeof(struct node));
	if(new_node == NULL)
		terminate("no space.");
	new_node->value = i;
	new_node->next = s->top;
	s->top = new_node;
}

ITEM pop(Stack s){
	if(s == NULL) terminate("no space.");
	struct node *temp = s->top;
	s->top = s->top->next;
	ITEM value = temp->value;
	free(temp);
	return value;	
}
