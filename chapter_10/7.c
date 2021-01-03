// ���ڸ� �Է¹޾� 7segment �������� ����ϱ�

#include<stdio.h>
#include<ctype.h>

#define MAX_DIGIT 10

char digits[4][MAX_DIGIT * 4];

//�� ���׸�Ʈ�� 2���� ���·� ���� 
const int segments[MAX_DIGIT][7] = {{1, 1, 1, 1, 1, 1, 0},
							  {0, 1, 1, 0, 0, 0, 0},
							  {1, 1, 0, 1, 1, 0, 1},
							  {1, 1, 1, 1, 0, 0, 1},
							  {0, 1, 1, 0, 0, 1, 1},
							  {1, 0, 1, 1, 0, 1, 1},
							  {1, 0, 1, 1, 1, 1, 1},
							  {1, 1, 1, 0, 0, 1, 0},
							  {1, 1, 1, 1, 1, 1, 1},
							  {1, 1, 1, 1, 0, 1, 1}};

//�� ���׸�Ʈ�� ��ġ�� 2���� x, y ��ǥ�� ���� 
const int positions[7][2] = {{0, 1},
					  {1, 2},
					  {2, 2},
					  {2, 1},
					  {2, 0},
					  {1, 0},
					  {1, 1}};

void clear_digits_array(void);
void process_digit(int digit, int position);
void printf_digits_array(void);

int main(void){
	int digit, position = 0;
	
	clear_digits_array();
	
	printf("Enter a number: ");
	while((digit = getchar()) != '\n'){
		if(isdigit(digit)){							//���ڰ� �ƴ� �͵��� ���� 
			process_digit(digit - '0', position);
			position += 4;
		}
	}
	printf_digits_array();
	return 0;
} 

void clear_digits_array(void){
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < MAX_DIGIT * 4;j++)
			digits[i][j] = ' ';
	}
}

void process_digit(int digit, int position){
	if(position >= MAX_DIGIT * 4) return;
	int x, y;
	for(int i = 0;i < 7;i++){
		if(segments[digit][i]){
			x = positions[i][0];
			y = positions[i][1] + position;
			digits[x][y] = i % 3 == 0 ? '_' : '|';
		}
	}
}

void printf_digits_array(void){
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < MAX_DIGIT * 4;j++)
			printf("%c", digits[i][j]);
		printf("\n");
	}
}
