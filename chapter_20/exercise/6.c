//type�� unsigned short�� hexadecimal ���� �޾� 8bit�� �������� 2���� byte�� �ڸ��� �ٲٴ� �Լ��� �ۼ��Ѵ�. 

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
