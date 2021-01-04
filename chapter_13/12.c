//문장을 입력받고 순서를 뒤바꿔서 출력 . ? ! 는 그대로 

#include<stdio.h>
#include<string.h>

#define N 100
#define MAX_SENTENCE 30
#define MAX_LEN 20

int main(void){
	char c, mark, box[MAX_SENTENCE + 1][MAX_LEN + 1], str[MAX_LEN + 1];
	int i = 0, j = 0;
	
	printf("Enter a sentence: ");
	while((c = getchar()) != '\n' && i < MAX_SENTENCE){
		if(c == ' ' || c == '\t'){
			box[i][j] = '\0';
			i++;
			j = 0;
			continue;
		}
		else if(c == '.' || c == '!' || c == '?'){
			mark = c;
			box[i][j] = '\0';
			break;
		}
		else{
			box[i][j++] = c;
		}
	}
	
	printf("Reversal of sentence: ");
	while(i >= 0)
		printf("%s ", box[i--]);
	
	printf("\b%c", mark);
	return 0;
} 
