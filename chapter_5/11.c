//두자리수 정수를 입력 받은뒤 그 수를 영문 형태로 출력

#include<stdio.h>

int main(void){
	int num, ten_digit, one_digit;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	ten_digit = num / 10;
	one_digit = num % 10;
	
	printf("You entered ");
	
	switch(ten_digit){
		case 9:
			printf("ninety"); break;
		case 8:
			printf("eighty"); break;
		case 7:
			printf("seventy"); break;
		case 6:
			printf("sixty"); break;
		case 5:
			printf("fifty"); break;
		case 4:
			printf("fourty"); break;
		case 3:
			printf("thirty"); break;
		case 2:
			printf("twenty"); break;
		case 1:
			switch(one_digit){
				case 9:
					printf("ninteen"); break;
				case 8:
					printf("eighteen"); break;
				case 7:
					printf("seventeen"); break;
				case 6:
					printf("sixteen"); break;
				case 5:
					printf("fifteen"); break;
				case 4:
					printf("fourteen"); break;
				case 3:
					printf("thirteen"); break;
				case 2:
					printf("twelve"); break;
				case 1:
					printf("eleven"); break;
				case 0:
					printf("ten"); break;
				default:
					break;
					
				break;
			}
			
		default:
			break;
	}
	
	if(ten_digit != 1){
		switch(one_digit){
		case 9:
			printf("-nine"); break;
		case 8:
			printf("-eight"); break;
		case 7:
			printf("-seven"); break;
		case 6:
			printf("-six"); break;
		case 5:
			printf("-five"); break;
		case 4:
			printf("-four"); break;
		case 3:
			printf("-three"); break;
		case 2:
			printf("-two"); break;
		case 1:
			printf("-one"); break;
		case 0:
			break;
		default:
			break;
		}
	}
	
	return 0;
} 
