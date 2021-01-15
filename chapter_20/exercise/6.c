//type이 unsigned short인 hexadecimal 값을 받아 8bit를 기준으로 2개의 byte의 자리를 바꾸는 함수를 작성한다. 

#include<stdio.h>

unsigned short swap_bytes(unsigned short i);

int main(void){
	unsigned short i;
	
	scanf("%hx", &i);
	printf("%hx", swap_bytes(i));
	return 0;
} 

unsigned short swap_bytes(unsigned short i){
	return ((i & 0xff) << 8) | ((i & (0xff << 8)) >> 8);
}
