//소수를 포함한 수를 0을 입력 할 때까지 입력을 받고 그 중에서 가장 큰 수를 출력한다.

#include<stdio.h>

int main(void){
	float num, max = 0.0f;
	
	printf("Enter a number: ");
	scanf("%f", &num);
	
	while(num != 0){
		printf("Enter a number: ");
		if(num > max) max = num;
		scanf("%f", &num);	
	}
	printf("The largest number: %.2f", max);
	return 0;
} 
