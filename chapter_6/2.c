//두 정수를 입력받고 두 정수간의 최대공약수를 출력 GCD

#include<stdio.h>

int main(void){
	int a, b, r;
	
	printf("Enter two integers: ");
	scanf("%d%d", &a, &b);
	
	while(b != 0){
		r = a % b;
		a = b;
		b = r;
	}
	printf("Greatest common divisor: %d", a);
	return 0;
} 
