//다음 함수의 error를 찾고 잘못된 곳을 고치시오.

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

//수정 본

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
