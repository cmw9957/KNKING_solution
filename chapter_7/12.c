//ǥ������ �Է¹ް� ������ �켱������ �����ϰ� ���� �� ��� �� ��� 

#include<stdio.h>

int main(void){
	double total, num;
	char c;
	
	printf("Enter an expression: ");
	scanf("%lf", &total);
	
	while((c = getchar()) != '\n'){
		switch(c){
			case '+':
				scanf("%lf", &num);
				total += num;
				break;
			case '-':
				scanf("%lf", &num);
				total -= num;
				break;
			case '*':
				scanf("%lf", &num);
				total *= num;
				break;
			case '/':
				scanf("%lf", &num);
				total /= num;
				break;
			default:
				break;
		}
	}
	
	printf("%.2lf", total); 
	return 0;
}
