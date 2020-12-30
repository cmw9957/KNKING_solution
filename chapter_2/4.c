//가지고 있는 돈을 입력받고 5%더한 값을 출력 

#include<stdio.h>

int main(void){
	float amount;
	float tmp;
	
	printf("Enter an amount: ");
	scanf("%f", &amount);
	
	tmp = amount;
	amount = tmp + (amount * 5.0f / 100.0f);
	printf("With tax added: %.2f", amount);
	return 0;
}
