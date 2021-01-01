//10x10 크기의 2차원 배열에 A-Z까지 랜덤으로 줄을 있는 프로그램 더이상 갈 경로가 없다면 종료 

#include<stdio.h>
#include<stdlib.h> //srand
#include<time.h>   //time

#define ROW 10
#define COL 10

int main(void){
	char box[ROW][COL] = {0}, ch = 'A';
	int up, down, left, right, x = 0, y = 0, go_x, go_y, r;
	
	srand((unsigned)time(NULL));
	
	box[x][y] = ch++;
	
	do{
		up = down = left = right = 0;
		go_x = x;
		go_y = y;
		
		if(x - 1 >= 0 && box[x - 1][y] == 0)
			up = 1;
		if(y + 1 < COL && box[x][y + 1] == 0)
			right = 1;
		if(x + 1 < ROW && box[x + 1][y] == 0)
			down = 1;
		if(y - 1 >= 0 && box[x][y - 1] == 0)
			left = 1;
		
		if(up + down + left + right){
		
			r = rand() % 4;
			
			switch(r){
				case 0:
					if(up)
						go_x--;
					break;
				case 1:
					if(right)
						go_y++;
					break;
				case 2:
					if(down)
						go_x++;
					break;
				case 3:
					if(left)
						go_y--;
					break;
				default:
					break;
			}
		
		}else break;
		
		if(box[go_x][go_y] == 0)
			box[x = go_x][y = go_y] = ch++;
		
	}while(ch <= 'Z');
	
	for(int i = 0;i < ROW;i++){
		for(int j = 0;j < COL;j++){
			if(box[i][j] == 0) box[i][j] = '.';
			printf("%2c", box[i][j]);
		}
		printf("\n");
	}
	return 0;
}
