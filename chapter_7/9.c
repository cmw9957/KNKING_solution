//시간을 입력받고 뒤의 am, pm에 따라 24-hours 형태로 출력

#include<stdio.h>

int main(void){
	int hour, minute;
	char time;
	
	printf("Enter a 12-hour time: ");
	scanf(" %d: %d %c", &hour, &minute, &time);
	
	if(time == 'P' || time == 'p') hour += 12;
	
	printf("Equivalent 24-hour time: %d:%d", hour, minute);
	return 0;
} 
