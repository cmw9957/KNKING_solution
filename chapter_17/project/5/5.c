#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define WORD_LEN 20

//정렬 기준 
int compare_words(const void *w1, const void *w2);
//나만의 동적 할당 함수 
void *my_malloc(size_t bytes);

int main(void){
	char **box = NULL, *str = NULL;
	int size = 1, num_str = 0;
	
	//가로 길이 할당 
	box = (char **)my_malloc((size_t)sizeof(char *));
	
	for(int i = 0; ; i++){
		//문자 공간 할당 
		str = (char *)my_malloc((size_t)WORD_LEN + 1);
		printf("Enter a word: ");
		//할당한 공간에 문자 집어넣기 
		fgets(str, WORD_LEN + 1, stdin);
		//아무것도 없이 엔터만 쳤을 때 엔터를 널로 바꾸기 
		if(str[strlen(str) - 1] == '\n')
			str[strlen(str) - 1] = '\0';
		
		//아무것도 안쳤을 때 종료 
		if(str[0] == '\0') break;
		
		//문자가 저장된 공간 가리키기 
		*(box + i) = str;
		//문자의 수 
		num_str++;
		
		//문자들을 저장할 수 있는 공간이 꽉 찼을 때 
		if(size == num_str){
			if((box = (char **)realloc(box, (size_t)sizeof(char *) * (size += 1))) == NULL){
				printf("Error:realloc failed\n");
				exit(EXIT_FAILURE);
			}
		}
	}
	//기준에 맞춰 정렬 
	qsort(box, num_str, sizeof(char *), compare_words);
	printf("\nIn sorted order: ");
	
	for(int i = 0;i < num_str;i++)
		printf("%s ", *(box + i));
	printf("\n");
	return 0;
}

void *my_malloc(size_t bytes){
	void *p;
	if((p = malloc(bytes)) == NULL){
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	return p;
}

int compare_words(const void *w1, const void *w2){
	return strcmp(*(char **)w1, *(char **)w2);
}
