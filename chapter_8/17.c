// nxn 크기의 박스 매직 박스를 만들기

#include<stdio.h>

#define MAX n * n

int main(void){
	int n, x = 0, y = 0, go_x, go_y, value = 1;
	int box[99][99] = {0};
	
	printf("Enter size of magic square: ");
	scanf("%d", &n);
	
	y = n / 2;			 //middle
	box[x][y] = value++;
	
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
		
		if(box[go_x][go_y] == 0)
			box[x = go_x][y = go_y] = value++;
		else
			box[x += 1][y] = value++;
	}while(value <= MAX);
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			printf("%5d", box[i][j]);
		}
		printf("\n");
	}
	return 0;
}
