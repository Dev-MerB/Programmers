using System;

public class Solution
{
    public int solution(int[] a, int[] b)
    {
        int answer = 0;
        int i = 0;
        foreach (int aNum in a)
        {
            answer += aNum * b[i];
            i++;
        }
        return answer;
    }
}