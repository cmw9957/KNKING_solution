//���ĺ�, ',' ,'.' �� ��� ���� ������ �ܾ��� ������ ���� �ܷΰ��� �Ҽ��� ���ڸ��������� ���

#include<stdio.h>

int main(void){
	char c;
	int alpha_cnt = 0, word_cnt = 1;
	
	printf("Enter a sentence: ");
	while((c = getchar()) != '\n'){
		if(c == ' '){
			word_cnt++;
		}else
			alpha_cnt++;
	}
	printf("Average word length: %.1lf", (double)alpha_cnt / word_cnt);
	return 0;
} 
