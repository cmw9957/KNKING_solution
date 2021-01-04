//CLI를 이용해 문장을 순서 바꿔서 출력하는 프로그램 만들기 

#include<stdio.h>

int main(int argc, char *argv[]){
        int i;
        for(i = argc - 1;i > 0;i--){
                printf("%s ", argv[i]);
        }
        printf("\n");
        return 0;
}
