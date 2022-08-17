#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = -1;
    for(long long i = 1; i <= n; i++)
    {
        if(n % i == 0 && n / i == i)
            return (i + 1) * (i + 1);
    }
    return answer;
}