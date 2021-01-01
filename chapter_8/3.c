//section 8.1의 repdigit.c 프로그램을 사용자가 0을 입력하기 전까지 계속 실행하게 수정

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
