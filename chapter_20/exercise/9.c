//다음 주어진 함수를 작성하라.

#include<stdio.h>

int counts_ones(unsigned char ch){
	int cnt = 0;
	while(ch){
		if(ch % 2 != 0)	cnt++;
		ch /= 2;
	}
	return cnt;
}

int counts_ones_no_loop(unsigned char ch){
	if(ch == 0)	return 0;
	
	return counts_ones_no_loop(ch / 2) + ch % 2;
}

int main(void){
	printf("%d\n", counts_ones('a'));
	printf("%d\n", counts_ones('a'));
	return 0;
}
