using System;

public class Solution
{
    public int[] solution(string s)
    {
        int iteration = 0;
        int sum = 0;
        int remove_cnt = 0;
        while (s.Length != 1)
        {
            sum = 0;
            char[] temp = s.ToCharArray();
            foreach (char zeroOne in temp)
            {
                if (zeroOne == '0')
                    sum++;
            }
            s = Convert.ToString(s.Length - sum, 2);
            iteration++;
            remove_cnt += sum;
        }
        int[] answer = { iteration, remove_cnt };
        return answer;
    }
}