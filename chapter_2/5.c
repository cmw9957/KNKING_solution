//3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 �� ���� x�� �Է¹޾� ���

#include<stdio.h>

int main(void){
	int x;
	scanf(" %d", &x);
	
	printf("%d", 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6);
	return 0;
}
