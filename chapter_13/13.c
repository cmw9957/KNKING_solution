//Caesar cipher 암호 기술을 이용해 문자열을 암호화해서 출력(함수를 이용).

#include<stdio.h>
#include<string.h>

#define MAX 80

void encrypt(char *message, int shift);

int main(void){
	char c, word[MAX] = {0};
	int i, n;
	
	printf("Enter message to be encrypted: ");
	gets(word);
	
	printf("Enter shift amount (1 - 25): ");
	scanf("%d", &n);
	
	encrypt(word, n);
	
	printf("Encrtpted message: ");
	puts(word);
	return 0;
}

void encrypt(char *message, int shift){
	while(*message){
		if(*message >= 65 && *message <= 90)
			*message = ((*message - 'A') + shift) % 26 + 'A';
		else if(*message >= 97 && *message <= 122)
			*message = ((*message - 'a') + shift) % 26 + 'a';
		message++;
	}
}
