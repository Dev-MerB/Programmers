using System;

public class Solution
{
    public int solution(int[,] sizes)
    {
        int answer = 0;
        int left_max, right_max = 1;
        for (int i = 0; i < sizes.GetLength(0); i++)
        {
            if (sizes[i, 0] <= sizes[i, 1])
            {
                int temp = sizes[i, 0];
                sizes[i, 0] = sizes[i, 1];
                sizes[i, 1] = temp;
            }
            if (sizes[i, 0] > left_max)
                left_max = sizes[i, 0];
            if (sizes[i, 1] > right_max)
                right_max = sizes[i, 1];
        }
        answer = left_max * right_max;
        return answer;
    }
}