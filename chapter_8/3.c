//section 8.1�� repdigit.c ���α׷��� ����ڰ� 0�� �Է��ϱ� ������ ��� �����ϰ� ����

#include<stdio.h>
#include<stdbool.h>

int main(void){
	bool digit_seen[10] = {false};
	int digit;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	if(n <= 0) printf("\nEscape!\n");
	while(n > 0){
		while(n > 0){
			digit = n % 10;
		if(digit_seen[digit])
			break;
		digit_seen[digit] = true;
		n /= 10;
		}
		if(n > 0)
			printf("\nReapeated digit\n\n");
		else
			printf("\nNo repeated digit\n\n");
		
		printf("Enter a number: ");
		scanf("%ld", &n);
		if(n <= 0) printf("\nEscape!\n");
	}
	
	return 0;
}
