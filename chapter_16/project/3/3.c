//16.3의 inventory.c 프로그램의 inventory와 num_parts 변수를 지역변수로 바꾸어 프로그램을 수정. 

#include<stdio.h>
#include"readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part{
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
};

int find_part(struct part inventory[], int num_parts, int number);
void insert(struct part inventory[], int *num_parts);
void search(struct part inventory[], int num_parts);
void update(struct part inventory[], int num_parts);
void print(struct part inventory[], int num_parts);

int main(void){
	char code;
	
	struct part inventory[MAX_PARTS];
	int num_parts = 0;
	
	for(;;){
		printf("Enter operation code: ");
		scanf(" %c", &code);
		while(getchar() != '\n')
			;
		switch(code){
			case 'i':	insert(inventory, &num_parts); break;
			case 's':	search(inventory, num_parts); break;
			case 'u':	update(inventory, num_parts); break;
			case 'p':	print(inventory, num_parts); break;
			case 'q':	return 0;
			default :	printf("illegal code\n");
		}
		printf("\n");
	}
}

int find_part(struct part inventory[], int num_parts, int number){
	int i;
	
	for(i = 0;i < num_parts;i++){
		if(inventory[i].number == number)
			return i;
	}
	return -1;
}

void insert(struct part inventory[], int *num_parts){
	int part_number;
	
	if(*num_parts == MAX_PARTS){
		printf("Database is full; can't add more parts.\n");
		return ;
	}
	printf("Enter part number: ");
	scanf("%d", &part_number);
	
	if(find_part(inventory, *num_parts, part_number) >= 0 ){
		printf("Part already exist.\n");
		return ;
	}
	
	inventory[*num_parts].number = part_number;
	printf("Enter part name: ");
	read_line(inventory[*num_parts].name, NAME_LEN);
	printf("Enter quantity on hand: ");
	scanf("%d", &inventory[*num_parts].on_hand);
	(*num_parts)++;
}

void search(struct part inventory[], int num_parts){
	int i, number;
	
	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(inventory, num_parts, number);
	if(i >= 0){
		printf("Part name: %s\n", inventory[i].name);
		printf("Quantity on hand: %d\n", inventory[i].on_hand);
	}else
		printf("Part not found.\n");
}

void update(struct part inventory[], int num_parts){
	int i, number, change;
	
	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(inventory, num_parts, number);
	if(i >= 0){
		printf("Enter change in quantity on hand: ");
		scanf("%d", &change);
		inventory[i].on_hand += change;
	}else
		printf("Part not foud.\n");
}

void print(struct part inventory[], int num_parts){
	int i;
	printf("%d", num_parts);
	printf("Part number	Part Name                   "
		   "Quantity on hand\n");
	for(i = 0;i < num_parts;i++){
		printf("%7d		%-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
	}
}
