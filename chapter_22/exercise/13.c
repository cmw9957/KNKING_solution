//�־��� �Լ� ������Ÿ���� ���� �ش� ������ �������� ������ 0�� ���� 

int line_length(const char *filename, int n);

int line_length(const char *filename, int n){
	FILE *fp;
	char c;
	int len = 0;
	if((fp = fopen(filename, "r")) == NULL)
		return 0;
	while(n > 1){
		while((c = getc(fp)) != '\n'){
			if(c == EOF) return 0;
		}
		n--;
	}
	while((c = fgetc(fp)) != '\n' && c != EOF)
		len++;
	
	return len;
}
