//점수를 입력받고 점수에 따라 정해진 등급을 출력

#include<stdio.h>

int main(void){
	int score;
	
	printf("Enter your score: ");
	scanf("%d", &score);
	
	printf("Letter grade: ");
	
	if(score >= 0 && score <= 100){
		score /= 10;
		switch(score){
		case 9:case 10:
			printf("A"); break;
		case 8:
			printf("B"); break;
		case 7:
			printf("C"); break;
		case 6:
			printf("D"); break;
		default:
			printf("F"); break;
		}
	}else
		printf("ERROR!");
	
	return 0;
} 
