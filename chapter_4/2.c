//3�ڸ� ���� �Է��Ͽ� �ڸ��� �ٲٱ�

#include<stdio.h>

int main(void){
	int num;
	
	printf("Enter a two-digit number: ");
	scanf("%d", &num);
	
	num = (num / 100) + (((num / 10) % 10) * 10) + ((num % 10) * 100);
	printf("The reversal is: %d", num);
	return 0;
} 
