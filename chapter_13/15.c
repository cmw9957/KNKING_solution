//���� ���α׷�����ؼ� RPN ǥ�� ���� �����

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
int evaluate_RPN_expression(const char *expression);

int main(void){
	char c, total, expression[101], *p;
	int a, b;
	
	while(1){
		printf("Enter an RPN expression (Quit for press q or Q): ");
		gets(expression);
		printf("Value of expression: %d\n", evaluate_RPN_expression(expression));
		p = expression;
		while(*p) *p++ = '\0';
	}
	
}

int evaluate_RPN_expression(const char *expression){
	int a, b, ans;
	while(1){
		if(isdigit(*expression))
			push(*expression - '0');
		else
			switch(*expression){
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
					ans = pop();
					make_empty();
					return ans;
				case ' ':
					break;
				default:
					exit(0);
			}
		expression++;
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
