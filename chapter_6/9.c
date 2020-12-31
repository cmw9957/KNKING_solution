//빚, 이자율, 달마다 내는 돈을 입력받아 3달 동안의 남은 돈을 내야하는 달 수를 입력받아 그 수까지 출력 

#include<stdio.h>

int main(void){
	float loan = 0.0f, rate = 0.0f, pay = 0.0f, tmp = 0.0f;
	int i, num_payment = 0;
	 
	printf("Enter amount of loan: ");
	scanf(" %f", &loan);
	printf("Enter interest rate: ");
	scanf(" %f", &rate);
	printf("Enter monthly payment: ");
	scanf(" %f", &pay);
	printf("Enter the number of payment: ");
	scanf("%d", &num_payment);
	
	for(i = 0;i < num_payment;i++){
		tmp = loan;
		loan = (tmp * rate / 100 / 12) + tmp - pay;
		printf("\nBalance remaining after %d payment: %.2f\n\n", i + 1, loan);
	}
	return 0;
}
