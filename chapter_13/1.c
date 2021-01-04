//단어를 입력받고 사전순으로 정렬해서 출력 4글자의 단어가 오면 종료

#include<stdio.h>
#include<string.h>

#define MAX 20

char word[MAX + 1], smallest[MAX + 1], largest[MAX + 1];

void get_word(void);
void get_first_word(void);
void get(void);

int main(void){	
	get();
	return 0;
} 

void get_word(void){
	printf("Enter word: ");
		scanf("%20s", word);
}
void get_first_word(void){
	get_word();
	
	strcpy(smallest, word);
	strcpy(largest, word);
}
void get(void){
	get_first_word();
	
	while(strlen(word) != 4){
		printf("Enter word: ");
			scanf(" %s", word);
			
		if(strcmp(word, smallest) < 0)
			strcpy(smallest, word);
		else if(strcmp(word, largest) > 0)
			strcpy(largest, word);
	}
	printf("Smallest word: %s\n", smallest);
	printf("Largest word: %s\n", largest);
}
