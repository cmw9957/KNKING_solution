//����ڷκ��� mm/dd/yyyy���·� ��¥�� �Է¹ް� ���� ���� ���·� �������� ���� ���·� ��Ÿ����

#include<stdio.h>

void callender(const int month);

int main(void){
	int month, day, year;
	
	printf("Enter a date (mm/dd/yyyy): ");
	scanf(" %2d/%2d/%4d", &month, &day, &year);
	
	printf("You entered the date ");
	callender(month);
	printf("%d, %d", day, year);
	return 0;
} 

void callender(const int month){
	const char *name_month[] = {"January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	printf("%s ", name_month[month - 1]);
}
