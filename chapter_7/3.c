//section 7.1의 sum2.c 프로그램을 double 값으로 수정

#include<stdio.h>

int main(void){
	double n, sum = 0;
	
	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate): ");
	
	scanf("%lf", &n);
	while(n != 0){
		sum += n;
		scanf("%lf", &n);
	}
	printf("The sum is: %lf\n", sum);
	return 0;
}  
