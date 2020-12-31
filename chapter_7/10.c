//vowels의 개수를 출력

#include<stdio.h>
#include<ctype.h>

int main(void){
	char c;
	int cnt = 0;
	
	printf("Enter a sentence: ");
	while((c = getchar()) != '\n'){
		switch(toupper(c)){
			case 'A':case 'E':case 'I':case 'O':case 'U':
				cnt++;
				break;
			default:
				break;
		}
	}
	
	printf("Your sentence contains %d vowels.", cnt);
	return 0;
} 
