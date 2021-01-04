//���ڸ� �Է¹ް� SCRABBLE crossed word game�� ��Ģ�� ���� �� ���ĺ��� ������ ���� ��� ���� ���� ���(�����͸� �̿��Ͽ� �빮�� �ҹ��� ���о���) 

#include<stdio.h>
#include<ctype.h>

int compute_scrabble_value(const char *word);

int main(void){
	char str[50] = {0};
	int sum;
	
	printf("Enter a word: ");
	
	scanf(" %s", str);
	
	sum = compute_scrabble_value(str);
	
	printf("Scrrable value: %d", sum);
	
	return 0;
}

int compute_scrabble_value(const char *word){
	int sum = 0, values[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
                             1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    while (*word)
        sum += values[toupper(*word++) - 'A'];
    return sum;
}
