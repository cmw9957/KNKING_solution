// 0/0/0�� �Է¹ޱ� ������ ��¥�� �Է¹ް� 0/0/0�Է½� �Է¹��� ��¥�߿� ���� �̸� ��¥�� ���

#include<stdio.h>

int main(void){
	int year, month, day, min_year, min_month, min_day;
	
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	min_year = year; min_month = month; min_day = day;
	
	while(year || month || day){
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &month, &day, &year);
		
		if(year == 0 || month == 0 || day == 0 ) break;
		
		if(year < min_year){
			min_year = year; min_month = month; min_day = day;
		}
		else if(month < min_month && !(year > min_year)){
			min_year = year; min_month = month; min_day = day;
		}
		else if(day < min_day && !(year > min_year) && !(month > min_month)){
			min_year = year; min_month = month; min_day = day;
		}
	}
	
	printf("\n%d/%d/%02d is the eariest date\n", min_month, min_day, min_year);
		
	return 0;
}
