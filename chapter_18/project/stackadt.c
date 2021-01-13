#include<stdio.h>
#include<stdlib.h>
#include"stackadt.h"

void terminate(const char *);

struct node{
	ITEM value;
	struct node *next;
};

struct stack{
	struct node *top = NULL;
};

Stack create(void){
	Stack s;
	if((s = malloc(sizeof(struct node))) == NULL)
		terminate("No space.\n");
	s->top = NULL;
	return s;
}

void destroy(Stack s){
	make_empty(s);
	free(s);
}

void terminate(const char *message){
	printf("%s", message);
	exit(1);
}

void make_empty(Stack s){
	while(!is_empty(s))
		pop(s);
}

bool is_empty(Stack s){
	return s->top == NULL;
}

bool is_full(Stack s){
	return false;
}

void push(Stack s, ITEM i){
	
	
	struct node *new_node;
	new_node = malloc(sizeof(struct node));
	if(new_node == NULL)
		terminate("No space.\n");
	new_node->value = i;
	new_node->next = s->top;
	s->top = new_node;
}
ITEM pop(Stack s){
	ITEM value;
	struct node *temp;
	
	temp = s->top;
	value = temp->value;
	s->top = s->top->next;
	free(temp);
	
	return value;
}
