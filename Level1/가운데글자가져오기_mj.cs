using System;
public class Solution
{
    public string solution(string s)
    {
        string answer = "";
        char[] charArr = s.ToCharArray();
        if (s.Length % 2 == 1)
            answer = charArr[s.Length / 2].ToString();
        else
            answer = charArr[s.Length / 2 - 1].ToString() + charArr[s.Length / 2].ToString();

        return answer;
    }
}