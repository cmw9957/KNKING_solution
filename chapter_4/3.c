//3자리수를 입력받아 자리수를 바꾸되 연산사용하지 않기

#include<stdio.h>

int main(void){
	int num1, num2, num3;
	
	printf("Enter a two-digit number: ");
	scanf("%1d%1d%1d", &num1, &num2, &num3);
	
	printf("The reversal is: %d%d%d", num3, num2, num1);
	return 0;
} 
