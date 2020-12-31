//표현식을 입력받고 연산자 우선순위를 무시하고 연산 후 결과 값 출력 

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
