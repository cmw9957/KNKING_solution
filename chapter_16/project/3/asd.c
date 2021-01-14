#include<stdio.h>

void foo(int *a);

int main(void){
	int a = 10;
	foo(&a);
	printf("%d", a);
	return 0;
}

void foo(int *a){
	*a = *a + 1;
}
