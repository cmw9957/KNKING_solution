// e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! �� ǥ������ n���� �Է¹��� �ٻ簪�� ���

#include<stdio.h>

int main(void){
	float e, num;
	int n, i, denom;
	
	printf("Enter the n value: ");
	scanf("%d", &n);
	
	for(i = 1, denom = 1, e = 1.0f;i <= n;i++)
		e += 1.0f / (denom *= i);
	
	printf("Approximation is %f", e);
	
	return 0;
}
