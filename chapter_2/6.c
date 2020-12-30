//((((3x + 2)x - 5)x + 7)x - 6 이 식을 x값 입력받아 계산 Horner's rule

#include<stdio.h>

int main(void){
	int x;
	scanf(" %d", &x);
	
	printf("%d", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
	return 0;
}
