//Caesar cipher 암호 기술을 이용해 문자열을 암호화해서 출력.

#include<stdio.h>

#define MAX 80

int main(void){
	char c, word[MAX] = {0};
	int i, n;
	
	printf("Enter message to be encrypted: ");
	for(i = 0;i < MAX && (c = getchar()) != '\n';i++)
		word[i] = c;
	
	printf("Enter shift amount (1 - 25): ");
	scanf("%d", &n);
	
	printf("Encrtpted message: ");
	for(int j = 0;j < i;j++){
		if(word[j] >= 65 && word[j] <= 90)
			word[j] = ((word[j] - 'A') + n) % 26 + 'A';
		else if(word[j] >= 97 && word[j] <= 122)
			word[j] = ((word[j] - 'a') + n) % 26 + 'a';
		
		putchar(word[j]);
	}
	return 0;
}
