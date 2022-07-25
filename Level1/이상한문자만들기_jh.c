#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(s + 1));
    strcpy(answer, s);
    int count = 0;
    for(int i = 0; i < strlen(answer); i++)
    {
        if (answer[i] >= 65)
        {
            if(count % 2 == 0 && answer[i] >= 97)
                answer[i] -= 32;
            else if(count % 2 != 0 && answer[i] <= 90)
                answer[i] += 32;
            count++;
        }
        else
            count = 0;
    }
    return answer;
}