#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int count = 1, temp, sum = 0;
    temp = x;
    while(x / count > 10)
        count = count * 10;
    while(count >= 1)
    {
        sum += temp / count;
        temp -= (temp / count) * count;
        count /= 10;
    }
    if(x % sum != 0)
        answer = false;
    return answer;
}