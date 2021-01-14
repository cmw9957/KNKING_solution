#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define WORD_LEN 20

//���� ���� 
int compare_words(const void *w1, const void *w2);
//������ ���� �Ҵ� �Լ� 
void *my_malloc(size_t bytes);

int main(void){
	char **box = NULL, *str = NULL;
	int size = 1, num_str = 0;
	
	//���� ���� �Ҵ� 
	box = (char **)my_malloc((size_t)sizeof(char *));
	
	for(int i = 0; ; i++){
		//���� ���� �Ҵ� 
		str = (char *)my_malloc((size_t)WORD_LEN + 1);
		printf("Enter a word: ");
		//�Ҵ��� ������ ���� ����ֱ� 
		fgets(str, WORD_LEN + 1, stdin);
		//�ƹ��͵� ���� ���͸� ���� �� ���͸� �η� �ٲٱ� 
		if(str[strlen(str) - 1] == '\n')
			str[strlen(str) - 1] = '\0';
		
		//�ƹ��͵� ������ �� ���� 
		if(str[0] == '\0') break;
		
		//���ڰ� ����� ���� ����Ű�� 
		*(box + i) = str;
		//������ �� 
		num_str++;
		
		//���ڵ��� ������ �� �ִ� ������ �� á�� �� 
		if(size == num_str){
			if((box = (char **)realloc(box, (size_t)sizeof(char *) * (size += 1))) == NULL){
				printf("Error:realloc failed\n");
				exit(EXIT_FAILURE);
			}
		}
	}
	//���ؿ� ���� ���� 
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
