void *my_malloc(size_t n){
	void *p;
	if((p = malloc(n)) == NULL){
		printf("ERROR: malloc failed.\n");
		exit(1);
	}
	return p;
}
