//�м��� �Է¹ް� ������ ���ڿ� �и� �۰� ���

#include<stdio.h>

int main(void){
	int num, denom, a, b, r;
	
	printf("Enter a fraction: ");
	scanf("%d/%d", &num, &denom);
	
	a = num;
	b = denom;
	
	while(b != 0){
		r = a % b;
		a = b;
		b = r;
	}
	printf("In lowest terms: %d/%d", num / a, denom / a);
	return 0;
} 
