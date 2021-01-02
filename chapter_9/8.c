//주사위 2개를 굴려 처음에 7 , 11이 나오면 승리, 2, 3, 12나오면 패배 그 외 숫자는 포인트로 잡으며 후에 포인트가 한번도 나오면 승리 대신 7이 나오면 패배

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
