//vowels의 개수를 출력하는 함수를 작성 

#include<stdio.h>
#include<ctype.h>

int compute_vowel_count(const char *sentence);

int main(void){
	char str[51] = {0};
	int cnt;
	
	printf("Enter a sentence: ");
	gets(str);
	
	cnt = compute_vowel_count(str);
	
	printf("Your sentence contains %d vowels.", cnt);
	return 0;
} 

int compute_vowel_count(const char *sentence){
	int cnt = 0;
	while(*sentence){
		switch(toupper(*sentence)){
			case 'A':case 'E':case 'I':case 'O':case 'U':
				cnt++;
				break;
			default:
				break;
		}
		sentence++;
	}
	return cnt;
}
