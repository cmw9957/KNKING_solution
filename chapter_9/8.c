//�ֻ��� 2���� ���� ó���� 7 , 11�� ������ �¸�, 2, 3, 12������ �й� �� �� ���ڴ� ����Ʈ�� ������ �Ŀ� ����Ʈ�� �ѹ��� ������ �¸� ��� 7�� ������ �й�

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

int roll_dice(void);
bool play_game(void);

int main(void){
	char ch;
	int win = 0, lose = 0;
	srand((unsigned)time(NULL));
	
	do{
		if(play_game()){
			win++;
			printf("You win!\n");
		}else{
			lose++;
			printf("You lose!\n");
		}
		printf("\nPlay again? ");
		scanf(" %c", &ch);
		printf("\n");
	}while(ch == 'y' || ch == 'Y');
	
	printf("\n\nWins: %d\tLoses: %d", win, lose);
	
	return 0;
} 

int roll_dice(void){
	int total;
	return total = rand() % 6 + rand() % 6 + 2;
}

bool play_game(void){
	int sum, point;
	
	sum = roll_dice();
	printf("You rolled: %d\n", sum);
		
	if(sum == 7 || sum == 11) return true;
		
	else if(sum == 2 || sum == 3 || sum == 12) return false;
	
	else{
		point = sum;
		printf("Your point is %d\n", point);
	}
	
	while(1){
		sum = roll_dice();
		printf("You rolled: %d\n", sum);
		
		if(sum == point) return true;
		if(sum == 7) return false;
	}
}
