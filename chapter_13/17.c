//section 12.2�� ���α׷��� �Լ��� Ȱ���� ���α׷����� ����

#include<stdio.h>
#include<ctype.h>	//isalpha
#include<stdbool.h>
#define MAX 100

char alpha[MAX + 1];

bool is_palindrome(const char *message);

int main(void){
	char str[MAX + 1] = {0};
	
	printf("Enter sentence: ");
	gets(str);
	
	if(is_palindrome(str))
		printf("Palindrome.\n");
	else
		printf("Not palindrome.\n");
	return 0;
}

bool is_palindrome(const char *message){
	char *p = alpha, *q = alpha;
	
	while(*message){
		if(isalpha(*message))
			*p++ = tolower(*message);
		message++;
	}
	*p = '\0';
	p--;
	while(q < p){
		if(*q != *p) return false;
		p--;
		q++;
	}
	return true;
}
