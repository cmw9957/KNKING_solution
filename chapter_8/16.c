//단어를 입력받고 그 다음 다시한번 입력받은 문자의 알파벳 종류와 수가 같은지를 출력

#include<stdio.h>
#include<ctype.h> //isalpha, tolower

int main(void){
	int i, alpha[26] = {0};
	char c;
	
	printf("Enter first word: ");
	for(i = 0;(c = getchar()) != '\n';i++){
		if(isalpha(c)){
			c = tolower(c);
			alpha[c - 'a']++;
		}
	}
	
	printf("Enter second word: ");
	for(i = 0;(c = getchar()) != '\n';i++){
		if(isalpha(c)){
			c = tolower(c);
			alpha[c - 'a']--;
		}
	}
	
	for(i = 0;i < 26;i++){
		if(alpha[i]){
			printf("The words are not anagrams.\n");
			return 0;
		}		
	}
	
	printf("The words are anagrams.\n");
	return 0;
} 
