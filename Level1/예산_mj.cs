using System;

public class Solution
{
    public int solution(int[] d, int budget)
    {
        int answer = 0;
        int sum = 0;
        Array.Sort(d);
        for (answer = 0; answer < d.Length; answer++)
        {
            sum += d[answer];
            if (sum == budget)
                return answer + 1;
            else if (sum > budget)
                return answer;
        }
        return answer;
    }
}