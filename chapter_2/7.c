//돈의 양을 입력받아 $20, $10 $5 $1의 최대 개수를 출력

#include<stdio.h>

int main(void){
	int dollar;
	
	printf("Enter a dollar amount: ");
	scanf(" %d", &dollar);
	printf("$20 bills: %d\n", dollar / 20);
	dollar %= 20;
	printf("$10 bills: %d\n", dollar / 10);
	dollar %= 10;
	printf("$5 bills: %d\n", dollar / 5);
	dollar %= 5;
	printf("$1 bills: %d\n", dollar);
	return 0;
} 
