struct node *q;

while(p != NULL){
	q = p->next;
	free(p);
	p = q;
}
