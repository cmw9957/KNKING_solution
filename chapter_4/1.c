//2자리 임의의 수를 입력하고 자리수를 바꾸기

#include<stdio.h>

int main(void){
	int num;
	
	printf("Enter a two-digit number: ");
	scanf("%d", &num);
	
	num = (num / 10) + ((num % 10) * 10);
	printf("The reversal is: %d", num);
	return 0;
} 
