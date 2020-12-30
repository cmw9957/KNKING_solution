//3자리 수를 입력하여 자리수 바꾸기

#include<stdio.h>

int main(void){
	int num;
	
	printf("Enter a two-digit number: ");
	scanf("%d", &num);
	
	num = (num / 100) + (((num / 10) % 10) * 10) + ((num % 10) * 100);
	printf("The reversal is: %d", num);
	return 0;
} 
