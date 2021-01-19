//아래 프로그램에서 while(ch = getc(source_fp) != EOF) putc(ch, dest_fp)로 수정하면 값은 컴파일 되는가? 된다면 이유를 말하시오

//결론은 컴파일이 된다. 그 이유는 '!='가 '='보다 더 높은 우선순위를 가지게 되므로 EOF에 도달하기 전까지 값 1을 가지게 되므로
//ch에 값 1을 저장하게 된다. 


#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	FILE *source_fp, *dest_fp;
	int ch;
	if(argc != 3){
		fprintf(stderr, "usage: fcopy source dest\n");
		exit(EXIT_FAILUARE);
	}
	
	if((source_fp = fopen(argv[1], "rb")) == NULL){
		fprintf(stderr, "Can't open %s\n", argv[2]);
		exit(EXIT_FAILUARE);
	}
	
	if((dest_fp = fopen(argv[2], "wb")) == NULL){
		fprintf(stderr, "Can't open, %s\n", argv[2]);
		fclose(source_fp);
		exit(EXIT_FAILUARE);
	}
	
	while((ch = getc(source_fp)) != EOF){
		if(putc(ch, dest_fp) == EOF){
			fprintf(stderr, "Error: writing to file failed\n");
			fclose(source_fp);
  			fclose(dest_fp);
  			exit(EXIT_FAILUARE);
		}
	}
	
	fclose(source_fp);
	fclose(dest_fp);
	return 0;
}
