struct node{
	int value;
	struct node *next;
};

struct node *first = NULL;

struct node *fine_last(struct node *list, int n){
	struct node *p, *q;
	p = list;
	q = NULL;
	while(p != NULL){
		if(p->value == n)
			q = p;
		p = p->next;
	}
	return q;
}
