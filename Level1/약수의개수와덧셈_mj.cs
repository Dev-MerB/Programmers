using System;

public class Solution
{
    public int solution(int left, int right)
    {
        int answer = 0;
        for (int num = left; num < right + 1; num++)
        {
            bool tf = true;
            for (int i = 1; i < 32; i++)
            {
                if (num / i == i && num % i == 0)
                    tf = false;
            }
            if (tf)
                answer += num;
            else
                answer -= num;
        }
        return answer;
    }
}