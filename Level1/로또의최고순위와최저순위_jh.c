#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.

    int* answer = (int*)malloc(2);
    int max = 0, min = 0;
    for(int i = 0; i < lottos_len; i++)
    {
        for(int j = 0; j < win_nums_len; j++)
        {
            if(lottos[i] == 0 || win_nums[j] == 0)
            {
                max++;
                break;
            }
            else if(lottos[i] == win_nums[j])
            {
                max++;
                min++;
            }
        }
    }
    if(max == 6)
        answer[0] = 1;
    else if(max == 5)
        answer[0] = 2;
    else if(max == 4)
        answer[0] = 3;
    else if(max == 3)
        answer[0] = 4;
    else if(max == 2)
        answer[0] = 5;
    else
        answer[0] = 6;

    if(min == 6)
        answer[1] = 1;
    else if(min == 5)
        answer[1] = 2;
    else if(min == 4)
        answer[1] = 3;
    else if(min == 3)
        answer[1] = 4;
    else if(min == 2)
        answer[1] = 5;
    else
        answer[1] = 6;
    return answer;
}