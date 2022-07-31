using System;
public class Solution
{
    public int solution(int n)
    {
        int answer = 0;
        for (int i = 2; i <= n; i++)
        {
            bool count = true;
            for (int j = 2; j <= (int)Math.Sqrt(n); j++)
                if (i / j > 1 && i % j == 0)
                {
                    count = false;
                    break;
                }
            if (count)
                answer++;
        }
        return answer;
    }
}