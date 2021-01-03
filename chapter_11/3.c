//section 6.3을 함수와 포인터를 사용한 프로그램으로 수정

#include<stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void){
	int num, denom, re_num, re_denom;
	
	printf("Enter a fraction: ");
	scanf(" %d/ %d", &num, &denom);
	
	reduce(num, denom, &re_num, &re_denom);
	
	if(re_denom == 1)
		printf("In lowest terms: %d", re_num);
	else if(re_denom == re_num)
		printf("In lowest terms: 1");
	else
		printf("In lowest terms: %d/%d", re_num, re_denom);
	return 0;
} 

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
	int remainder, a, b;
	a = numerator; b = denominator;
	
	while(b != 0){
		remainder = a % b;
		a = b;
		b = remainder;
	}
	*reduced_numerator = numerator / a;
	*reduced_denominator = denominator / a;
}
