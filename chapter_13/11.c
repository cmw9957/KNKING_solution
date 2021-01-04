//알파벳, ',' ,'.' 를 모두 합한 개수를 단어의 개수로 나눈 겨로가를 소수점 한자리수까지만 출력(함수와 포인터를 사용)

#include<stdio.h>

double compute_average_word_length(const char *sentence);

int main(void){
	char str[101];
	double average;
	printf("Enter a sentence: ");
	gets(str);
	average = compute_average_word_length(str);
	printf("Average word length: %.1lf", average);
	return 0;
} 

double compute_average_word_length(const char *sentence){
	int alpha_cnt = 0, word_cnt = 1;
	
	while(*sentence != '\n' && *sentence != '\0'){
		if(*sentence != ' ')
			alpha_cnt++;
		else
			word_cnt++;
		
		sentence++;
	}
	return (double)alpha_cnt / word_cnt;
}
