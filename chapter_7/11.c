//�̸��� �Է¹ް� last name�� ��� ����ϰ� first name�� �̴ϼ� �� ���ڷ� ���

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
