//section 5.11프로그램을 switch문 말고 pointer to string을 이용하기 

#include<stdio.h>

int main(void){
	int num, ten_digit, one_digit;
	char *ten[] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninty"};
	char *one[] = {"", "-one", "-two", "-three", "-four", "-five", "-six", "-seven", "-eight", "-nine"};
	char *other[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen"};
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	ten_digit = num / 10 - 1;
	one_digit = num % 10;
	
	printf("You entered ");
	
	if(ten_digit == 0)
		printf("%s", other[one_digit]);
	else
		printf("%s%s", ten[ten_digit - 1], one[one_digit]);
	printf("\n");
	return 0;
}
