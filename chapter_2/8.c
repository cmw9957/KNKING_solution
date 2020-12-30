//빚, 이자율, 달마다 내는 돈을 입력받아 3달 동안의 남은 돈을 출력 

#include<stdio.h>

int main(void){
	float loan, rate, pay, tmp;
	
	printf("Enter amount of loan: ");
	scanf(" %f", &loan);
	printf("Enter interest rate: ");
	scanf(" %f", &rate);
	printf("Enter monthly payment: ");
	scanf(" %f", &pay);
	
	tmp = loan;
	loan = (tmp * rate / 100 / 12) + tmp - pay;
	
	printf("Balance remaining after first payment: %.2f\n", loan);
	
	tmp = loan;
	loan = (tmp * rate / 100 / 12) + tmp - pay;
	
	printf("Balance remaining after first payment: %.2f\n", loan);
	
	tmp = loan;
	loan = (tmp * rate / 100 / 12) + tmp - pay;
	
	printf("Balance remaining after first payment: %.2f\n", loan);
	return 0;
}
