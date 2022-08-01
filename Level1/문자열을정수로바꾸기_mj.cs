using System;
public class Solution
{
    public int solution(string s)
    {
        int answer = 0;
        if (s[0] == '-')
        {
            s = s.Substring(1, s.Length - 1);
            answer -= Convert.ToInt32(s);
        }
        else
            answer += Convert.ToInt32(s);

        return answer;
    }
}