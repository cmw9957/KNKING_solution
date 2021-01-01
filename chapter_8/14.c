//문장을 입력받고 순서를 뒤바꿔서 출력 . ? ! 는 그대로

#include<stdio.h>

#define N 100

int main(void){
	char ch, mark, word[N] = {0};
	int i;
	
	printf("Enter a sentence: ");
	for(i = 0;(ch = getchar()) != '\n' && i < N;i++){
		if(ch == '?' || ch == '!' || ch == '.'){
			mark = ch;
			break;
		}
		word[i] = ch;
	}
	
	printf("Reversal of sentence: ");
	for(i -= 1;i >= 0;i--){
		if(word[i] == ' ' || i == 0){
			if(i != 0){
				for(int j = i + 1;word[j] != ' ' && word[j] != '\0';j++){
					putchar(word[j]);
				}
				printf(" ");
			}else{
				for(int j = i;word[j] != ' ' && word[j] != '\0';j++)
					putchar(word[j]);
				putchar(mark);
			}
		}
	}
	return 0;
} 
