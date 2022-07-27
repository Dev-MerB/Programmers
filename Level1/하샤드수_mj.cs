using System;
public class Solution
{
    public bool solution(int x)
    {
        bool answer = true;
        int sum = 0;
        int y = x;
        while (y > 0)
        {
            if (y / 10 == 0 && y % 10 == 0)
                break;
            sum += y % 10;
            y /= 10;
        }
        if (x % sum != 0)
            answer = false;
        return answer;
    }
}