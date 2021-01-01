//section 7.11 배열로 해결

#include<stdio.h>

int main(void){
	char c, name[20], initial;
	
	printf("Enter a first and last name: ");
	while((c = getchar()) == ' ')
	;
	
	initial = c;
	while((getchar() != ' '))
	;
	for(int i = 0;(c = getchar()) != '\n';i++)
		name[i] = c;
		
	printf("\nYou entered the name: ");
	for(int i = 0;name[i] != '\0';i++) //name[i] != '\0' 이부분을 계속 실수한다. 
		putchar(name[i]);
	printf(", %c.", initial);
	return 0;
} 
