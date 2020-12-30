//수입을 입력받고 주어진 비율에 따라 세금을 출력

#include<stdio.h>

int main(void){
	float income, tax;
	
	printf("Enter your income: ");
	scanf("%f", &income);
	
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
		
	printf("Tax due: %.2f\n", tax);
	return 0;
} 
