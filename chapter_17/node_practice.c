#include<stdio.h>
#include<stdlib.h>

struct node{
	int value;
	struct node *next;
};	//���

struct node *add_to_list(struct node *list, int n){
	struct node *new_node;
	
	new_node = malloc(sizeof(struct node));
	if(new_node == NULL){	//��忡 �޸𸮸� �Ҵ� �� �� ���� �� 
		printf("ERROR! no space to allocate.");
		exit(1);
	}
	new_node->value = n;	//���� �߰��ϴ� ����� �� 
	new_node->next = list;	//������ ���� ����� �ּҸ� ����. 
	return new_node;
}	//�߰��� ��带 �����ϴ� �Լ� 

struct node *read_node(void){
	struct node *first = NULL;	//ù ��°�� ��������� ���� NULL�� �����Ѿ��Ѵ�.(list�� ��) 
	int n;
	
	printf("Enter a series of integers (0 to terminate): ");
	while(1){
		scanf("%d", &n);
		if(n == 0) return first;
		first = add_to_list(first, n);	//��带 �����ϰ� ���� ������� ���� ������ ���� �հ� first�� ���� ������� ��带 ����Ŵ. 
	}
}	//��忡 ���� �Է��ϴ� �Լ� 

struct node *search_list(struct node *list, int n){
	while(list != NULL && list->value != n){
		list = list->next;	//ã�� ���� �ƴϸ� �ش� ��鰡 ����Ű�� ���� �̵�. 
	}
	return list;	//Ư�� ����� �޸� �ּҸ� ��ȯ 
}	//Ư�� ��带 ã�� �Լ� 

struct node *delete_from_list(struct node *list, int n){
	struct node *cur, *prev;	//cur : ���� ��ġ�� ���, prev : ���� ��ġ���� 1ĭ ���� ���. 
	
	for(cur = list, prev = NULL; cur != NULL && cur->value != n;prev = cur, cur = cur->next)
		;
	
	if(cur == NULL)
		return list;	//ã������ ���� ���� ��尡 �������� ���� ��. 
		
	if(prev == NULL)
		list = list->next;	//ó�� ��尡 ã������ ����� �� list�� ��ȸ�ΰ� �ι� ° ��带 ����Ű���� ����. 
	else
		prev->next = cur->next;	//���� ��带 �ٴ��� ��忡 ��ȸ. 
	free(cur);	//������ �ϴ� ��带 �Ҵ� ����. 
	return list;
}	//�Է� ���� ���� ���� ��带 ã�� ����.

int main(void){
	struct node *first;
	
	read_node();
	return 0;
} 
