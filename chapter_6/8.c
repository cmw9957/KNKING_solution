//�� ���� �Է¹��� ���� ��� ���Ϻ��� 1���� �����ϴ��� ���� �Է¹��� �� �޷��� ���

#include<stdio.h>

int main(void){
	int i, j, total_day, start_day;
	
	printf("Enter number of days in month: ");
	scanf("%d", &total_day);
	printf("Enter starting day of the week: ");
	scanf("%d", &start_day);
	
	printf("\n");
	//���� ���ϱ��� ���� 
	for(j = 0;j < start_day - 1;j++) 
			printf("   ");

	for(i = 1;i <= total_day;i++){
		//�� �� ��� 
		printf("%3d", i);
		//������ ������ �� �ٲ� 
		if(!(start_day % 7)){
			printf("\n");
			start_day = 0;
		}
		start_day++;
	}
	return 0;
} 
