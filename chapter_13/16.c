//������ �Է¹޾� �����͸� ����� �Ųٷ� ��� (�Լ��� �̿��� ������ ����) 

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
