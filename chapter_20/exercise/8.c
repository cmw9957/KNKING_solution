#include<stdio.h>

unsigned int f(unsigned int i, int m, int n){
	return (i >> (m + 1 - n)) & ~(~0 << n);
}

int main(void){
	
	printf("%d", f(255, 5, 5));
	return 0;
}

//(a)	~(~0 << n)�� ���� �����ΰ�?
//
//(b)	�Լ��� � ����� �ϴ°�?
//
//a (n - 1)bit ���� 1�� ��Ʈ�� ����
//
//b	 n bit�� ������ �� ���ִ�. 
