#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
	int value;
	int number;
	struct node *next;
};

struct node *top = NULL;

void make_empty(void);
bool is_empty(void);
bool push(int i, int cnt);
int pop(void);
void print_node(void);
struct node *fine_last(struct node *list, int n);

int main(void){
	int cnt = 1;
	
	push(5, cnt++);
	push(2, cnt++);
	push(2, cnt++);
	push(5, cnt++);
	push(2, cnt++);
	push(3, cnt++);
	
	top = fine_last(top, 2);
	printf("%d", top->number);
	return 0;
}

void make_empty(void){
	struct node *p;
	while(top != NULL){
		p = top->next;
		free(top);
		top = p;
	}
}

bool is_empty(void){
	return top == NULL;
}

bool push(int i, int cnt){
	struct node *new_node;
	new_node = (struct node *)malloc(sizeof(struct node));
	
	if(new_node == NULL) return false;
	
	new_node->value = i;
	new_node->number = cnt;
	new_node->next = top;
	top = new_node;
	
	return true;
}
int pop(void){
	if(is_empty()){
		printf("STACK UNDERFLOW!");
		exit(1);
	}
	int a;
	struct node *p;
	
	p = top;
	top = top->next;
	a = p->value;
	free(p);
	
	return a;
}

void print_node(void){
	while(top != NULL){
		printf("==%d==\n", top->value);
		top = top->next;
	}
}

struct node *fine_last(struct node *list, int n){
	struct node *p, *q;
	p = list;
	q = NULL;
	while(p != NULL){
		if(p->value == n)
			q = p;
		p = p->next;
	}
	return q;
}
