//���� �Լ��� error�� ã�� �߸��� ���� ��ġ�ÿ�.

int count_periods(const char *filename){
	FILE *fp;
	int n = 0;
	if((fp = fopen(filename, "r")) != NULL){
		while(fgetc(fp) != EOF)
			if(fgetc(fp) == '.')
				n++;
		fclose(fp);
	}
	return n;
} 

//���� ��

int count_periods(const char *filename){
	FILE *fp;
	int n = 0;
	char c;
	if((fp = fopen(filename, "r")) != NULL){
		while((c = fgetc(fp)) != EOF)
			if(c == '.')
				n++;
		fclose(fp);
	}
	return n;
}  
