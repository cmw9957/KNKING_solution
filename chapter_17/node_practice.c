#include<stdio.h>
#include<stdlib.h>

struct node{
	int value;
	struct node *next;
};	//노드

struct node *add_to_list(struct node *list, int n){
	struct node *new_node;
	
	new_node = malloc(sizeof(struct node));
	if(new_node == NULL){	//노드에 메모리를 할당 할 수 없을 때 
		printf("ERROR! no space to allocate.");
		exit(1);
	}
	new_node->value = n;	//현재 추가하는 노드의 값 
	new_node->next = list;	//직전에 만든 노드의 주소를 이음. 
	return new_node;
}	//추가할 노드를 생성하는 함수 

struct node *read_node(void){
	struct node *first = NULL;	//첫 번째로 만들어지는 노드는 NULL을 가리켜야한다.(list의 끝) 
	int n;
	
	printf("Enter a series of integers (0 to terminate): ");
	while(1){
		scanf("%d", &n);
		if(n == 0) return first;
		first = add_to_list(first, n);	//노드를 생성하고 새로 만들어진 노드는 직전의 노드와 잇고 first는 새로 만들어진 노드를 가리킴. 
	}
}	//노드에 값을 입력하는 함수 

struct node *search_list(struct node *list, int n){
	while(list != NULL && list->value != n){
		list = list->next;	//찾는 값이 아니면 해당 노들가 가리키는 노드로 이동. 
	}
	return list;	//특정 노드의 메모리 주소를 반환 
}	//특정 노드를 찾는 함수 

struct node *delete_from_list(struct node *list, int n){
	struct node *cur, *prev;	//cur : 현재 위치한 노드, prev : 현재 위치보다 1칸 전의 노드. 
	
	for(cur = list, prev = NULL; cur != NULL && cur->value != n;prev = cur, cur = cur->next)
		;
	
	if(cur == NULL)
		return list;	//찾으려는 값을 가진 노드가 존재하지 않을 때. 
		
	if(prev == NULL)
		list = list->next;	//처음 노드가 찾으려는 노드일 때 list를 우회로가 두번 째 노드를 가리키도록 설정. 
	else
		prev->next = cur->next;	//전의 노드를 다다음 노드에 우회. 
	free(cur);	//지워야 하는 노드를 할당 해제. 
	return list;
}	//입력 받은 값을 가진 노드를 찾아 삭제.

int main(void){
	struct node *first;
	
	read_node();
	return 0;
} 
