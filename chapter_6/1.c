//�Ҽ��� ������ ���� 0�� �Է� �� ������ �Է��� �ް� �� �߿��� ���� ū ���� ����Ѵ�.

#include<stdio.h>

int main(void){
	float num, max = 0.0f;
	
	printf("Enter a number: ");
	scanf("%f", &num);
	
	while(num != 0){
		printf("Enter a number: ");
		if(num > max) max = num;
		scanf("%f", &num);	
	}
	printf("The largest number: %.2f", max);
	return 0;
} 
