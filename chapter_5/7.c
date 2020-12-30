//4개의 정수를 입력 받아 가장 큰 수와 작은 수를 출력

#include<stdio.h>

int main(void){
	int num1, num2, num3, num4, max, min;
	
	printf("Enter four integers: ");
	scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
	
	max = min = num1;
	
	if(num2 > max)
		max = num2;
	else if(num2 < min)
		min = num2;
	
	if(num3 > max)
		max = num3;
	else if(num3 < min)
		min = num3;
		
	if(num4 > max)
		max = num4;
	else if(num4 < min)
		min = num4;
		
	printf("Largest: %d\nSmallest: %d", max, min);
	return 0;
}
