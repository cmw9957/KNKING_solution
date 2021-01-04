//section 8.14포인터 사용해서 수정 

#include<stdio.h>

#define N 100

int main(void){
	char ch, mark, word[N] = {0}, *p, *q;
	int i;
	
	printf("Enter a sentence: ");
	for(p = word;(ch = getchar()) != '\n' && p < word + N;p++){
		if(ch == '?' || ch == '!' || ch == '.'){
			mark = ch;
			break;
		}
		*p = ch;
	}
	p--;
	printf("Reversal of sentence: ");
	for(;p >= word;p--){
		if(*p == ' ' || p == word){
			if(p != word){
				q = p;
				q++;
				for(;*q != ' ' && *q != '\0';q++){
					putchar(*q);
				}
				printf(" ");
			}else{
				for(q = p;*q != ' ' && *q != '\0';q++)
					putchar(*q);
				putchar(mark);
			}
		}
	}
	return 0;
} 
