// e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! ���� 1/n!�� ���� ���Ƿ� ���� ���� �ʵ����ؼ� �Է¹��� �ٻ簪�� ���

#include<stdio.h>

int main(void){
	float e, term, E;
	int n, i, denom;
	
	printf("Enter epsilon: ");
	scanf("%f", &E);
	
	for(i = 1, denom = 1, term = 1.0f, e = 1.0f;term > E;i++){
		term = (1.0f / (denom *= i));
		e += term;
	}
	
	printf("Approximation is %f", e);
	return 0;
}
