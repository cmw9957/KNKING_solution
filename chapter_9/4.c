//section 8.16 ���α׷��� 2���� �Լ��� �̷���� ���α׷����� ����

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void){
	int word1[26] = {0}, word2[26] = {0};
	
	read_word(word1);
	read_word(word2);
	
	if(equal_array(word1, word2))
		printf("The words are anagrams\n");
	else
		printf("the words are not anagrams\n");
	
	return 0;
} 

void read_word(int counts[26]){
	char c;
	
	printf("Enter the word: ");
	for(int i = 0;(c = getchar()) != '\n';i++){
		if(isalpha(c)){
			c = tolower(c);
			counts[c - 'a']++;
		}
	}
}

bool equal_array(int counts1[26], int counts2[26]){
	for(int i = 0;i < 26;i++)
		if(counts1[i] != counts2[i]) return false;
		
	return true;
}
