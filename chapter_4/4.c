//입력받은 수를 8진수형태로 출력하기 

#include<stdio.h>

int main(void){
	int num;
	
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);
	
	printf("In octal, your number is: %d%d%d%d%d",
	num / 4096, (num % 4096) / 512, (num % 512) / 64, (num % 64) / 8, num % 8);
	return 0;
}
