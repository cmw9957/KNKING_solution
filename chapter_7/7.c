//사용자로부터 두 분수 사이에 +, -, *, / 를 입력받아 그에 맞는 연산값을 출력

#include<stdio.h>

int main(void){
	int num1, num2, denom1, denom2, ans_num, ans_denom, a, b, r;
	char operater;
	
	printf("Enter two fractions separated by a plus sign: ");
	
	scanf(" %d/%d %c %d/%d", &num1, &denom1, &operater, &num2, &denom2);
	
	switch(operater){
		case '+':
			ans_num = num1 * denom2 + num2 * denom1;
			ans_denom = denom1 * denom2;
			break;
		case '-':
			ans_num = num1 * denom1 - num2 * denom1;
			ans_denom = denom1 * denom2;
			break;
		case '*':
			ans_num = num1 * num2;
			ans_denom = denom1 * denom2;
			break;
		case '/':
			ans_num = num1 * denom1;
			ans_denom = denom1 * num2;
			break;
		default:
			printf("The \'%c\' is not an operator.", operater);
			return 1;
	}
	
	a = ans_num; b = ans_denom;
	
	while(b != 0){
		r = a % b;
		a = b;
		b = r;
	}
	
	ans_num /= a; ans_denom /= a;
	
	if(ans_num == ans_denom)
		printf("Result is 1");
	else if(ans_num > ans_denom)
		printf("Result is %d %d/%d",ans_num / ans_denom, ans_num % ans_denom, ans_denom);
	else
		printf("Result is %d/%d", ans_num, ans_denom);
	
	return 0;
}
