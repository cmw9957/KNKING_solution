#include<stdio.h>

unsigned int rotate_left(unsigned int i, int n);
unsigned int rotate_right(unsigned int i, int n);

int main(void){
	printf("%lx\n", rotate_left(0x12345678, 8));
	printf("%lx\n", rotate_right(0x12345678, 8));
	return 0;
}

unsigned int rotate_left(unsigned int i, int n){
	return (i << n) | (i >> (32 - n));
}

unsigned int rotate_right(unsigned int i, int n){
	return (i << (32 - n)) | (i >> n);
}
