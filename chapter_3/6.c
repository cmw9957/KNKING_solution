//분수의 합 출력하기

#include<stdio.h>

int main(void){
	int num1, num2, denom1, denom2, ans_num, ans_denom;
	
	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
	
	ans_num = num1 * denom2 + num2 * denom1;
	ans_denom = denom1 * denom2;
	
	printf("The sum is %d/%d", ans_num, ans_denom);
	return 0;
} 
