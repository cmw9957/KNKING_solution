//시간을 입력받고 오후 24-hour 형태를 12-hour 형태로 바꿔 출력

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
