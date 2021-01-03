//스택 프로그램사용해서 RPN 표현 계산기 만들기

//section 10.2의 스택 예시 프로그램을 이용해서 중괄호, 괄호가 서로 대칭이 되는지 확인

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>	//isdigit

#define STACK_SIZE 100

char content[STACK_SIZE];
int top = 0;

void stack_overflow(void);
void stack_underflow(void);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char);
char pop(void);

int main(void){
	char c, total;
	int a, b;
	
	printf("Enter an RPN expression (Quit for press q or Q): ");
	while(1){
		scanf(" %c", &c);
		if(isdigit(c))
			push(c - '0');
		else
			switch(c){
				case '+':
					push(pop() + pop()); break;
				case '-':
					a = pop();
					b = pop();
					push(b - a); break;
				case '*':
					push(pop() * pop()); break;
				case '/':
					a = pop();
					b = pop();
					push(b / a); break;
				case '=':
					printf("Value of expression: %d\n", pop());
					printf("\nEnter an RPN expression (Quit for press q or Q): ");
					make_empty(); break;
				case ' ':
					break;
				default:
					exit(0);
			}
	}
}

void make_empty(void){
	top = 0;
}

bool is_empty(void){
	return top == 0;
}

bool is_full(void){
	return top == STACK_SIZE;
}

void push(char i){
	if(is_full())
		stack_overflow();
	else
		content[top++] = i;
}

char pop(void){
	if(is_empty())
		stack_underflow();
	else
		return content[--top];
}

void stack_overflow(void){
	printf("STACK OVERFLOW!\n");
	exit(1);
}

void stack_underflow(void){
	printf("STACK UNDERFLOW!\n");
	exit(1);
} 
