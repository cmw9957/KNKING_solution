//���� �ٸ� �� ��¥�� �Է� �ް� ��� ��¥�� �� �̸� ��¥������ ���

#include<stdio.h>

int main(void){
	int year1, month1, day1, year2, month2, day2, date;
	
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month1, &day1, &year1);
	
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month2, &day2, &year2);
	
	if(year1 < year2)
		date = 0;
	else if(year2 < year1)
		date = 1;
	else if(month1 < month2)
		date = 0;
	else if(month2 < month1)
		date = 1;
	else if(day1 < day2)
		date = 0;
	else if(day2 < day1)
		date = 1;
	
	if(date)
		printf("%02d/%02d/%02d is eariler than %02d/%02d/%02d", month2, day2, year2, month1, day1, year1);
	else
		printf("%02d/%02d/%02d is eariler than %02d/%02d/%02d", month1, day1, year1, month2, day2, year2);
		
	return 0;
} 
