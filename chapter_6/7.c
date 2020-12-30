//section 6.3의 square3.c프로그랭을 for문 안에 i를 초기화, 조건, 증가 부분으로 바꿔라

#include<stdio.h>

int main(void){
	int i, n, odd, square;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	
	for(i = 1, square = 1, odd = 3;i <= n;odd += 2, i++){
		printf("%10d%10d\n", i, square);
		square += odd;
	}
	return 0;
}  
