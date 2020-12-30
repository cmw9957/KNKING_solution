//ISBN 입력받고 출력하기 

#include<stdio.h>

int main(void){
	int prefix, grp_identifier, publisher_code, item_number, chk_digit;
	
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &prefix, &grp_identifier, &publisher_code, &item_number, &chk_digit);
	
	printf("GS1 prefix: %d\n", prefix);
	printf("Group identifier: %d\n", grp_identifier);
	printf("Publisher code: %d\n", publisher_code);
	printf("Item number: %d\n", item_number);
	printf("Check digit: %d\n", chk_digit);
	
	return 0;
}
