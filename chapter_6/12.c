// e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! 에서 1/n!의 값이 엡실론 값을 넘지 않도록해서 입력받은 근사값을 출력

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
