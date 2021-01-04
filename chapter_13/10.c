//section 7.11함수로 수정 

#include<stdio.h>

void reverse_name(char *name);

int main(void){
	char str[51] = {0};
	
	printf("Enter a first and last name: ");
	gets(str);
	reverse_name(str);
	return 0;
}

void reverse_name(char *name){
	char initial;
	while(*name == ' ') name++;
	initial = *name;
	while(*name++ != ' ' && *name != '\0');
	
	while(*name && *name != '\n')
		putchar(*name++);
	printf(", %c.", initial);
}
