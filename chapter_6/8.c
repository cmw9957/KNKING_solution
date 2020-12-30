//일 수를 입력받은 다음 어느 요일부터 1일이 시작하는지 값을 입력받은 뒤 달력을 출력

#include<stdio.h>

int main(void){
	int i, j, total_day, start_day;
	
	printf("Enter number of days in month: ");
	scanf("%d", &total_day);
	printf("Enter starting day of the week: ");
	scanf("%d", &start_day);
	
	printf("\n");
	//시작 요일까지 띄어쓰기 
	for(j = 0;j < start_day - 1;j++) 
			printf("   ");

	for(i = 1;i <= total_day;i++){
		//일 수 출력 
		printf("%3d", i);
		//일주일 끝나면 줄 바꿈 
		if(!(start_day % 7)){
			printf("\n");
			start_day = 0;
		}
		start_day++;
	}
	return 0;
} 
