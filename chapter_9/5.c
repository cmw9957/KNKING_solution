//section 8.17을 두 함수로 나타내는 프로그램으로 수정

#include<stdio.h>

#define MAX n * n

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void){
	int n;
	char box[99][99] = {0};
	printf("Enter size of magic square: ");
	scanf("%d", &n);
	
	
	create_magic_square(n, box);
	print_magic_square(n, box);
	
	return 0;
}

void create_magic_square(int n, char magic_square[n][n]){
	int x = 0, y = 0, go_x, go_y, value = 1;
	
	y = n / 2;			 //middle
	magic_square[x][y] = value++;
	
	do{
		go_x = x; go_y = y;
		
		if(x - 1 < 0)
			go_x = n - 1;
		else
			go_x -= 1;
		if(y + 1 >= n)
			go_y = 0;
		else
			go_y += 1;
		
		if(magic_square[go_x][go_y] == 0)
			magic_square[x = go_x][y = go_y] = value++;
		else
			magic_square[x += 1][y] = value++;
	}while(value <= '0' + MAX);
}

void print_magic_square(int n, char magic_square[n][n]){
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			printf("%5d", magic_square[i][j]);
		}
		printf("\n");
	}
}
