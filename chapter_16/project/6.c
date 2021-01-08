//서로 다른 두 날짜를 입력 받고 어느 날짜가 더 이른 날짜인지를 구조체를 활용하여 출력

#include<stdio.h>

struct date{
	int month, day, year;
};

int compare_total_day(struct date a, struct date b);

int main(void){
	int comparison;
	struct date d1, d2;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
	
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);
	
	comparison = compare_total_day(d1, d2);
	
	if(comparison > 0)
		printf("%02d/%02d/%02d is eariler than %02d/%02d/%02d", d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);
	else if(comparison < 0)
		printf("%02d/%02d/%02d is eariler than %02d/%02d/%02d", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
	else
		printf("SAME");
	return 0;
} 

int compare_total_day(struct date a, struct date b){
	if(a.year < b.year) return -1;
	else if(a.year > b.year) return 1;
	
	int d1_sum = 0, d2_sum = 0, day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if(a.month > 1 && (a.year % 4 == 0 && a.year % 100 != 0) || a.year % 400)	//윤년 일 때 
		day[1]++;
	for(int i = 0;i < a.month - 1;i++)
		d1_sum += day[i];
	d1_sum += a.day;

	for(int i = 0;i < b.month - 1;i++)
		d2_sum += day[i];
	d2_sum += b.day;
	
	if(d1_sum < d2_sum) return -1;
	else if(d1_sum > d2_sum) return 1;
	else return 0;
}
