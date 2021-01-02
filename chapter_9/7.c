//section 9.6의 power 함수를 더 빨리 동작하도록 수정

#include<stdio.h>

int power(int x, int n);

int main(void){
	int x, n;
	
	printf("Enter a value of x and power: ");
	scanf(" %d %d", &x, &n);
	
	printf("Answer is %d", power(x, n));
	return 0;
}

int power(int x, int n){
	if(n == 0) return 1;
	int a;
	
	if(!(n % 2)){
		a = power(x, n / 2);
		return a * a;
	}
	return x * power(x, n - 1);
}
