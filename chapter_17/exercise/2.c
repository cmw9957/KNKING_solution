char *duplicate(const char *str){
	char *p;
	p = malloc(strlen(str) + 1);
	if(p == NULL){
		printf("ERROR: malloc failes.\n");
		return NULL;
	}
	strcpy(p, str);
	return p;
}
