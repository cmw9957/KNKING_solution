//section 5.2의 broker.c를 수정
//기존의 거래 가격의 입력 대신에 거래 횟수와 회수당 가격을 입력하는 걸로 수정
//주어진 rival broker의 가격도 추가 출력

#include<stdio.h>

int main(void){
	float commission, value, rival_commission;
	int share;
	
	printf("Enter the number of shares: ");
	scanf("%d", &share);
	
	printf("Enter the price per share: ");
	scanf("%f", &value);
	
	value *= share;
	
	if(value < 2500.00f)
		commission = 30.00f + .017f * value;
	else if(value < 6250.00f)
		commission = 56.00f + .0066f * value;
	else if(value < 20000.00f)
		commission = 76.00f + .0034f * value;
	else if(value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else if(value < 500000.00f)
		commission = 155.00f + .0011f * value;
	else 
		commission = 255.00f + .0009f *value;
	
	if(commission < 39.00f)
		commission = 39.00f;
		
	if(share < 2000)
		rival_commission = 33.00f + .03f * share;
	else if(share >= 2000)
		rival_commission = 33.00f + .02f * share;
	
	printf("Commission is %.2f\nRival commission is %.2f", commission, rival_commission);
	
	return 0;
} 
