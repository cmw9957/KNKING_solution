//������ �ִ� ���� �Է¹ް� 5%���� ���� ��� 

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
