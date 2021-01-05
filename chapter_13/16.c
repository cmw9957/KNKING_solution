//문장을 입력받아 포인터를 사용해 거꾸로 출력 (함수를 이용한 것으로 수정) 

#include<stdio.h>

#define N 100

void reverse(char *message);

int main(void){
	char word[N + 1] = {0};
	
	printf("Enter a message: ");
	gets(word);
	
	reverse(word);
	
	printf("Reversal is : ");
	puts(word);
	return 0;
}

void reverse(char *message){
	char temp, *p = message, *q = message;
	
	while(*q) q++;
	q--;
	
	while(q > p){
		temp = *q;
		*q = *p;
		*p = temp;
		q--;
		p++;
	}
}
