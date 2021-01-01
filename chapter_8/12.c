//문자를 입력받고 SCRABBLE crossed word game의 규칙에 따라 각 알파벳이 가지는 값을 모두 더한 값을 배열에 저장한 후 출력(대문자 소문자 구분없이) 

#include <stdio.h>
#include <ctype.h>

int main(void) {

    char c;
    int sum,
        scrabble[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 
                        5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 
                        1, 4, 4, 8, 4, 10};

    printf("Enter a word: ");

    while ((c = getchar()) != '\n') {
        sum += scrabble[toupper(c) - 'A'];
    }
    printf("Scrabble value: %d\n", sum);
    return 0;
}
