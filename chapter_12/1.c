//문장을 입력받아 포인터를 사용해 거꾸로 출력 

#include<stdio.h>

#define N 100

int main(void){
	char c, word[N] = {0}, *p;
	
	p = word;
	printf("Enter a message: ");
	while((c = getchar()) != '\n' && p < word + N)
		*p++ = c;
	p--;
	
	printf("Reversal is: ");
	while(p >= word)
		putchar(*p--);
	return 0;
}
