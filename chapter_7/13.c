//알파벳, ',' ,'.' 를 모두 합한 개수를 단어의 개수로 나눈 겨로가를 소수점 한자리수까지만 출력

#include<stdio.h>

int main(void){
	char c;
	int alpha_cnt = 0, word_cnt = 1;
	
	printf("Enter a sentence: ");
	while((c = getchar()) != '\n'){
		if(c == ' '){
			word_cnt++;
		}else
			alpha_cnt++;
	}
	printf("Average word length: %.1lf", (double)alpha_cnt / word_cnt);
	return 0;
} 
