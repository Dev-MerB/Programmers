#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count)
{
    long long answer = -1;

    long long sum = 0;
    for (int i = 0; i <= count; i++)
    {
        sum += price * i;
    }

    if (sum > money)
        answer = (sum - money);
    else
        answer = 0;

    return answer;
}