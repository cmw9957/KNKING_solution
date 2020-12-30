//사용자에게서 반지름 입력받아  구의 부피 계산 

#include<stdio.h>

int main(void){
	int r;
	
	printf("Enter a radius: ");
	scanf("%d", &r);
	
	printf("Volume is %.2f", 4.0f/3.0f * 3.14f * r * r * r);
	return 0;
}
