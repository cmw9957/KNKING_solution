//CLI를 이용해 입력한 수를 더하는 프로그램 

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        int i, sum = 0;
        for(i = 1;i < argc;i++){
                sum += atoi(argv[i]);
        }

        printf("Sum is %d", sum);
        return 0;
}
