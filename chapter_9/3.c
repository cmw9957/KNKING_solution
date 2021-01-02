//section 8.9의 프로그램을 2개의 함수로 나누어 수정

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 10
#define COL 10

void generate_random_walk(char walk[ROW][COL]);
void print_array(char walk[ROW][COL]);

int main(void){
	char box[ROW][COL] = {0};
	
	generate_random_walk(box);
	print_array(box);
	
	return 0;
} 

void generate_random_walk(char walk[ROW][COL]){
	char ch = 'A';
	int up, down, left, right, x = 0, y = 0, go_x, go_y, r;
	
	walk[x][y] = ch++;
	
	srand((unsigned)time(NULL));
	
	do{
		up = down = left = right = 0;
		go_x = x;
		go_y = y;
		
		if(x - 1 >= 0 && walk[x - 1][y] == 0)
			up = 1;
		if(y + 1 < COL && walk[x][y + 1] == 0)
			right = 1;
		if(x + 1 < ROW && walk[x + 1][y] == 0)
			down = 1;
		if(y - 1 >= 0 && walk[x][y - 1] == 0)
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
		
		if(walk[go_x][go_y] == 0)
			walk[x = go_x][y = go_y] = ch++;
		
	}while(ch <= 'Z');
}

void print_array(char walk[ROW][COL]){
	for(int i = 0;i < ROW;i++){
		for(int j = 0;j < COL;j++){
			if(walk[i][j] == 0) walk[i][j] = '.';
			printf("%2c", walk[i][j]);
		}
		printf("\n");
	}
}
