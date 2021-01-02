// 3x^5+2x^4-5x^3-x^2+7x-6 을 계산하는 함수를 만들기

#include<stdio.h>

int compute(int);

int main(void){
	int x;
	
	printf("Enter a value of x: ");
	scanf("%d", &x);
	
	printf("Answer is %d", compute(x));
	return 0;
} 

int compute(int x){
	return x = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
}
