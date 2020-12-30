//짝수의 합이 입력받은 수까지 출력

#include<stdio.h>

int main(void){
	int n, i, sum = 0;
	
	scanf("%d", &n);
	
	for(i = 1;sum <= n;i++){
		sum = 4 * i * i;
		if(sum > n) break;
		printf("%d\n", sum);
	}
	return 0;
} 
