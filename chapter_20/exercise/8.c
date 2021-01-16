#include<stdio.h>

unsigned int f(unsigned int i, int m, int n){
	return (i >> (m + 1 - n)) & ~(~0 << n);
}

int main(void){
	
	printf("%d", f(255, 5, 5));
	return 0;
}

//(a)	~(~0 << n)의 값은 무엇인가?
//
//(b)	함수는 어떤 기능을 하는가?
//
//a (n - 1)bit 까지 1인 비트를 생성
//
//b	 n bit의 범위를 알 수있다. 
