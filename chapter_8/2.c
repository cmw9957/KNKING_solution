//���ӵ� ���ڵ��� �Է¹ް� 2�� �̻� �ݺ��� ���ڸ� ���̺� �������� ���

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
	printf("Digit:\t\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
	printf("Occurrences:");
	
	for(int i = 0;i < 10;i++)
		printf("\t%d", digit_seen[i]);
	
	return 0;
}
