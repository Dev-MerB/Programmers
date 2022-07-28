using System;
public class Solution
{
    public int solution(int num)
    {
        int answer = 0;
        while (num != 1 && answer != 501)
        {
            if (num % 2 == 1)
            {
                num *= 3;
                num += 1;
            }
            else
                num /= 2;
            answer++;
        }
        if (answer > 500)
            answer = -1;
        return answer;
    }
}