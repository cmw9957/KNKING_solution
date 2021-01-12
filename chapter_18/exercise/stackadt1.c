#include<stdio.h>
#include<stdlib.h>
#include"stackadt1.h"

#define STACK_SIZE 100

struct stack{
	char content[STACK_SIZE];
    int top = 0;
};


void stack_overflow(void){
	printf("STACK OVERFLOW!\n");
	exit(1);
}

void stack_underflow(void){
	printf("STACK UNDERFLOW!\n");
	exit(1);
}

void make_empty(Stack s){
	s->top = 0;
}

bool is_empty(Stack s){
	return s->top == 0;
}

bool is_full(Stack s){
	return s->top == STACK_SIZE;
}

void push(Stack s, char c){
	if(is_full(s)){
		stack_overflow();
		exit(1);
	}
	s->contents[s->top++] = c;
}

char pop(Stack s){
	if(is_empty(s)){
		stack_underflow();
		exit(1);
	}
	return s->contents[--s->top];
}
