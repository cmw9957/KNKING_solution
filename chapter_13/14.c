//section 8.16�� anagram������ �Ǻ��ϴ� ���α׷��� �Լ��� ����� ����

#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>	//isalpha

#define MAX_LEN 100

int alpha[26];
bool are_anagrams(const char *word1, const char *word2);

int main(void){
	char word1[MAX_LEN + 1], word2[MAX_LEN + 1];
	
	printf("Enter first word: ");
	gets(word1);
	
	printf("Enter second word: ");
	gets(word2);
	
	if(are_anagrams(word1, word2))
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");
	return 0;
} 

bool are_anagrams(const char *word1, const char *word2){
	int *p = alpha;
	
	while(*word1){
		if(isalpha(*word1))
			alpha[tolower(*word1++) - 'a']++;
		else
			word1++;
	}
	while(*word2){
		if(isalpha(*word2))
			alpha[tolower(*word2++) - 'a']--;
		else
			word2++;
	}
	
	while(p < alpha + 26){
		if(*p != 0) return false;
		p++;
	}
	
	return true;
}
