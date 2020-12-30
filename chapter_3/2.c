//상품 정보를 입력받고 출력

#include<stdio.h>

int main(void){
	int number, year, month, day;
	float price;
	
	printf("Enter item number: ");
	scanf("%d", &number);
	
	printf("Enter unit price: ");
	scanf("%f", &price);
	
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%.2f\t\t%02d/%02d/%d", number, price, month, day, year);
	return 0;
} 
