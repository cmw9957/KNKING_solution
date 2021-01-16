//다음 주어진 함수를 작성하라.

#include<stdio.h>

#define INT_BITS (sizeof(int) * 8 - 1)

unsigned int reverse_bits(unsigned int n){
	unsigned int a = 0;
	int i = INT_BITS;
	while(n){
		a |= n % 2 << i--;
		n /= 2;
	}
	return a;
}

int main(void){
	printf("%d", reverse_bits(20));
	return 0;
}
