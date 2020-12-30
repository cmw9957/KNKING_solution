//전화번호 입력받고 출력하기

#include<stdio.h>

int main(void){
	int first, second, third;
	
	printf("Enter phone number [ (xxx) xxx-xxxx ]: ");
	scanf("(%d) %d-%d", &first, &second, &third);
	
	printf("You entered %d.%d.%d", first, second, third);
	return 0;
} 
