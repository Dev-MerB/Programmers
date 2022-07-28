using System;
using System.Linq;
using System.Collections.Generic;
public class Solution
{
    public int[] solution(long n)
    {
        String answerS = n.ToString();
        int[] answer = new int[answerS.Length];
        int i = 0;
        foreach (char s in answerS)
        {
            answer[i] = (int)char.GetNumericValue(s);
            i++;
        }
        Array.Reverse(answer);
        return answer;
    }
}