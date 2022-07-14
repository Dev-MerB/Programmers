#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    long temp = (long)num;
    while(temp != 1)
    {
        if(answer >= 500)
        {
            answer = -1;
            break;
        }
        if(temp % 2 == 0)
            temp /= 2;
        else
            temp = temp * 3 + 1;
        answer++;
    }
    return answer;
}