//�ð��� �Է¹ް� ���� 24-hour ���¸� 12-hour ���·� �ٲ� ���

#include<stdio.h>

int main(void){
	int h, m;
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);
	
	if(h > 12)
		printf("Equivalent 12-hour time: %d:%d PM", h - 12, m);
	else if(h == 12)
		printf("Equivalent 12-hour time: %d:%d PM", h, m);
	else
	    printf("Equivalent 12-hour time: %d:%d AM", h, m);
	return 0;
}
