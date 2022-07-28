using System;
using System.Linq;
using System.Collections.Generic;
public class Solution
{
    public int[] solution(int n, int m)
    {
        int[] answer = { 1, n * m };
        for (int i = 1; i <= (n / 2) || i <= (m / 2); i++)
            if (n % i == 0 && m % i == 0)
                answer[0] = i;
        answer[1] /= answer[0];
        return answer;
    }
}