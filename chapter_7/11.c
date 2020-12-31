//이름을 입력받고 last name은 모두 출력하고 first name은 이니셜 한 글자로 출력

#include<stdio.h>

int main(void){
	char ch, c;
	
	printf("Enter a first and last name: ");
	scanf(" %c", &c);
	
	while((ch = getchar()) != ' ');
	
	ch = getchar();
	
	do{
		printf("%c", ch);
	}while((ch = getchar()) != '\n' && ch != ' ');
	
	printf(", %c.", c);
	return 0;
}
