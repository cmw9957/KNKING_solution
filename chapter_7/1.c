//short�� �ִ� ũ��� long�� �ִ� ũ�⸦ ����ؼ� interger type�� �� ��Ʈ�� ������ ��� 
//short�� 16��Ʈ long�� 32��Ʈ ��� interger�� 32��Ʈ 

#include<stdio.h>

int main(void){
	int n;
	long i;
	scanf("%d", &n);
	
	for(i = 1;i <= n;i++)
		printf("%10ld%30ld\n", i, i * i);
	return 0;
}
