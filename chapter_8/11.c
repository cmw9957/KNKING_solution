//section 7.5의 문제를 배열로 수정

#include<stdio.h>
#include<ctype.h>

#define N ((int) (sizeof(word) / sizeof(word[0])))

int main(void){
	char word[15] = {0};
	int cnt = 0;
	
	printf("Enter phone number: ");
	
	for(int i = 0;i < N;i++){
		scanf("%c", &word[i]);
		cnt++;
		if(word[i] == '\n') break;
	}
	
	for(int i = 0;i < cnt - 1;i++){
		switch(toupper(word[i])){
			case 'A':case 'B':case 'C': word[i] = '2'; break;
				
			case 'D':case 'E':case 'F': word[i] = '3'; break;
				
			case 'G':case 'H':case 'I': word[i] = '4'; break;
				
			case 'J':case 'K':case 'L': word[i] = '5'; break;
				
			case 'M':case 'N':case 'O': word[i] = '6'; break;
				
			case 'P':case 'R':case 'S': word[i] = '7'; break;
				
			case 'T':case 'U':case 'V': word[i] = '8'; break;
				
			case 'W':case 'X':case 'Y': word[i] = '9'; break;
				
			default:
				break;
		}
		printf("%c", word[i]);
	}
	return 0;
}
