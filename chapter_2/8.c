//��, ������, �޸��� ���� ���� �Է¹޾� 3�� ������ ���� ���� ��� 

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
