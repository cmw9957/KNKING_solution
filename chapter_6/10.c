// 0/0/0을 입력받기 전까지 날짜를 입력받고 0/0/0입력시 입력받은 날짜중에 가장 이른 날짜를 출력

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
