#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_ROW 50

int main(void){
	char *word;
	char *remind[MAX_ROW];
	int num_row = 0, i = 0;
	
	while(1){
		word = (char *)malloc(20 + 1);
		printf("Enter word: ");
		gets(word);
		if(*word == '\0' && num_row == MAX_ROW) break;
		
		for(i = 0;i < num_row;i++){
			if(strcmp(word, remind[i]) > 0) break;
		}
		for(int j = num_row;j > i;j--){
			remind[j] = remind[j - 1];
		}
		
		strcpy(remind[i], word);
		num_row++;
		free(word);
	}
	
	printf("In sorted order:");
	for(i = 0;i <= num_row;i++)
		printf(" %s", remind[i]);
	return 0;
}
