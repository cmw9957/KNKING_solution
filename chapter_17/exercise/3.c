int *create_array(int n, int initial_value){
	int *p, *q;
	
	if((p = (int *)malloc(sizeof(int) * n)) == NULL){
		printf("ERROR: malloc failed.\n");
		return NULL;
	}
	for(q = p;p < q + n;p++)
		*p = initial_value;
	return q;
}
