using System;
public class Solution
{
    public long solution(long n)
    {
        long answer = (long)Math.Sqrt(n);
        if (n == answer * answer)
            return (answer + 1) * (answer + 1);
        else
            return -1;
    }
}