// section 6.3�� square2.c�� �����Ͽ� 24�ٸ��� ���͸� ġ�������� ������� ���ϰ� ����

#include<stdio.h>

int main(void){
	int n, i;
	
	scanf("%d", &n);
	getchar();
	
	for(i = 1;i <= n;i++){
		printf("%10d%10d\n", i, i * i);
		if(!(i % 24)){
			printf("\n\nPress Enter to continue...\n\n");
			if(getchar() != '\n') break;
		}
	}
	return 0;
}
