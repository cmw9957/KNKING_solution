struct node{
	int value;
	struct node *next;
};

void delete_from_list(struct node **list, int n){
	struct node *prev = NULL;
	while(*list != NULL){
		if(**list->value == n){
			prev->next = *list->next;
			prev = *list;
			free(prev);
			*list = *list->next;
		}
		prev = *list;
		*list = *list->next;
	}
}
