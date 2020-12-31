// section 6.3의 square2.c를 수정하여 24줄마다 엔터를 치지않으면 출력하지 못하게 수정

#include<stdio.h>

int main(void){
	int n, i;
	
	scanf("%d", &n);
	getchar();
	
	for(i = 1;i <= n;i++){
		printf("%10d%10d\n", i, i * i);
		if(!(i % 24)){
			printf("\n\nPress Enter to continue...\n\n");
			if(getchar() != '\n') break;
		}
	}
	return 0;
}
