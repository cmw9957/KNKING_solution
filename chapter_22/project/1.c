//22.2�� canopen.c���α׷��� command line�� �� ���� ���α׷� �̸��� �Է� ���� �� �ְ� ����

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(int argc, int *argv[]){
	FILE *fp;
	bool openfail = false;
	for(int i = 1;i <= argc;i++){
		if((fp = fopen(argv[i], "r")) == NULL){
			printf("%s can't be opend!\n", argv[i]);
			openfail = true;
		}else{
			printf("%s opend!\n", argv[i]);
			fclose(fp);
		}
	}
	
	if(openfail)
		exit(EXIT_FAILUARE);
	exit(EXIT_SUCCESS);
} 
