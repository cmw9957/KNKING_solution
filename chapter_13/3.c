//section 8.2의 deal.c 프로그램의 배열을 포인터로 바꾸기

#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUM_SUIT 4
#define NUM_RANKS 13

int main(void){
	bool in_hand[NUM_SUIT][NUM_RANKS] = {false};
	int num_cards, rank, suit;
	const char *rank_code[] = {"Two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "Jack", "Queen", "King", "Ace"};
	const char *suit_code[] = {"Clover", "Diamond", "Heart", "Spade"};
	
	srand((unsigned)time(NULL));
	
	printf("Enter number of cards in hand: ");
	scanf("%d", &num_cards);
	
	printf("Your hand:\n");
	while(num_cards > 0){
		suit = rand() % NUM_SUIT;
		rank = rand() % NUM_RANKS;
		if(!in_hand[suit][rank]){
			in_hand[suit][rank] = true;
			num_cards--;
			printf("%s of %s\n", rank_code[rank], suit_code[suit]);
		}
	}
	return 0;
} 
