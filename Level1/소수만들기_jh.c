#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer = 0, num = 0;
    for(int i = 0; i < nums_len - 2; i++)
    {
        for(int k = i + 1; k < nums_len - 1; k++)
        {
            for(int j = k + 1; j < nums_len; j++)
            {
                num = nums[i] + nums[k] + nums[j];
                for(int r = 1; r < num; r++)
                {
                    if(num % r == 0 && r != 1)
                        break;
                    if(r == num - 1)
                    {
                        answer++;
                        break;
                    }
                }
            }
        }
    }

    return answer;
}