//�ð��� �Է¹ް� ���� am, pm�� ���� 24-hours ���·� ���

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
