using System;
public class Solution
{
    public long solution(long n)
    {
        long answer = 0;
        char[] c = n.ToString().ToCharArray();
        Array.Sort(c);
        Array.Reverse(c);
        answer = Convert.ToInt64(new string(c));
        return answer;
    }
}