//������ �Է¹޾� �����͸� ����� �Ųٷ� ��� 

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
