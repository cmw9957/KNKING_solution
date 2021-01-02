//section 5.5를 함수를 이용해 세금을 계산하는 프로그램으로 수정 

#include<stdio.h>

float get_tax(float); 

int main(void){
	float income, tax;
	
	printf("Enter your income: ");
	scanf("%f", &income);
	
	tax = get_tax(income);
	
	printf("Tax due: %.2f\n", tax);
	return 0;
}

float get_tax(float income){
	float tax;
	
	if(income < 750.00f)
		tax = income * .01f;
	else if(income >= 750 && income <= 2250)
		tax = 7.50f + (income - 750.00f) * .02f;
	else if(income >= 2250 && income <= 3750)
		tax = 37.50f + (income - 2250.00f) * .03f;
	else if(income >= 3750 && income <= 5250)
		tax = 82.50 + (income - 3750.00f) * .04f;
	else if(income >= 5250 && income <= 7000)
		tax = 142.50f + (income - 5250.00f) * .05f;
	else
		tax = 230.00f + (income - 7000.00f) * .06f;
	
	return tax;
}
