//���ӵ� ���ڵ��� �Է¹ް� 2�� �̻� �ݺ��� ���ڸ� ���

#include<stdio.h>

int main(void){
	int digit, digit_seen[10] = {0};
	long n;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while(n > 0){
		digit = n % 10;
		digit_seen[digit]++;
		n /= 10;
	}
	
	printf("Repeated digit(s):");
	for(int i = 0;i < 10;i++){
		if(digit_seen[i] > 1)
			printf("%2d", i);
	}
	
	return 0;
}
