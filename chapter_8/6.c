//문장을 입력받고 그 문장을 B1FF 형태로 변환

#include<stdio.h>
#include<ctype.h>

#define N 100

int main(void){
	char ch, word[N];
	int i = 0, cnt = 0;
	
	printf("Enter message: ");
	while((ch = getchar()) != '\n'){
		switch(ch = toupper(ch)){
			case 'A':
				word[i++] = '4'; break;
			case 'B':
				word[i++] = '8'; break;
			case 'E':
				word[i++] = '3'; break;
			case 'I':
				word[i++] = '1'; break;
			case 'O':
				word[i++] = '0'; break;
			case 'S':
				word[i++] = '5'; break;
			default:
				word[i++] = ch;
		}
		cnt++;
	}
	printf("In B1FF-speak: ");
	for(i = 0;i < cnt;i++)
		printf("%c", word[i]);
	printf("!!!!!!!!!!\n");
	return 0;
} 
