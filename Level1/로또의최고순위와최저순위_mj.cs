using System;
using System.Linq;
using System.Collections.Generic;

public class Solution
{
    public int[] solution(int[] lottos, int[] win_nums)
    {
        int[] answer = new int[2] { 1, 6 };
        int zero = 0;

        foreach (int num in lottos)
            if (num == 0)
                zero++;

        if (zero == 6)
            return answer;

        int[] concat = lottos.Concat(win_nums).ToArray();
        concat = concat.Distinct().ToArray();
        int count = 12 - concat.Length;

        if (zero > 0)
        {
            answer[1] = 7 - (count - (zero - 1));
            answer[0] = 7 - (count + 1);
        }
        else
        {
            answer[0] = 7 - count;
            answer[1] = 7 - count;
            if (answer[0] == 7)
            {
                answer[0] = 6;
                answer[1] = 6;
            }
        }
        return answer;
    }
}