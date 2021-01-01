//2차원 배열을 만들어 행들의 합, 열들의 합을 출력

#include<stdio.h>

#define ROW 5
#define COL 5

int main(void){
	int box[ROW][COL], sum = 0;
	
	for(int i = 0;i < ROW;i++){
		printf("Enter row %d: ", i + 1);
		for(int j = 0;j < COL;j++)
			scanf("%d", &box[i][j]);
	}
	
	printf("Row total:");
	for(int i = 0;i < ROW;i++){
		for(int j = 0;j < COL;j++){
			sum += box[i][j];
		}
		printf("%4d", sum);
		sum = 0;
	}
	
	printf("\nColumn totals:");
	for(int i = 0;i < COL;i++){
		for(int j = 0;j < ROW;j++){
			sum += box[j][i];
		}
		printf("%4d", sum);
		sum = 0;
	}
	printf("\n");
	return 0;
}
