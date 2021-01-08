//비행기 출발 시각과 도착 시간을 구조체 배열 형태를 통해 입력받아 비행 일정중 입력받은 출발 값과 가장 가까운 시간대를 출력

#include<stdio.h>

#define LEN (int)((sizeof(time)) / (sizeof(time[0])))
typedef struct{
	int departure;
	int arrival;
} Time;

int main(void){
	int user_time, h, m, i;
	char f, b;
	
	const Time time[8] = {{480, 616}, {583, 712}, {679, 811},
					{767, 900}, {840, 968}, {945, 1075},
					{1140, 1280}, {1305, 1438}};
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);
	
	user_time = h * 60 + m;
	
	printf("Closet departure is ");
	for(i = 0;i < LEN;i++){
		if(user_time <= time[i].departure + ((time[i + 1].departure - time[i].departure) / 2)) break;
	}
	
	if(time[i].departure <= 583){
		f = b = 'a';
	}else if(time[i].departure <= 679){
		f = 'a';
		b = 'p';
	}else if(time[i].departure <= 1305){
		f = b = 'p';
	}
	
	printf("%d:%02d %c.m., arriving at %d:%02d %c.m.\n", (time[i].departure / 60) > 12 ? (time[i].departure / 60) - 12 : (time[i].departure / 60), time[i].departure % 60, f, 
														  (time[i].arrival / 60) > 12 ? (time[i].arrival / 60) - 12 : (time[i].arrival / 60) , time[i].arrival % 60, b);
	return 0;
} 
