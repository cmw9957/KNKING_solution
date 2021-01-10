struct node *delete_from_list(struct node *list, int n){
	struct node *cur;
	for(cur = list;cur != NULL && ((cur->next)->value != n);cur = cur->next)
		;
	if(cur == NULL)
		return list;
	
	if(cur == list)
		list = list->next;
	else{
		(cur->next) = ((cur->next)->next);
		cur = cur->next;
	}
	free(cur);
	return list;
}
