using System;
using System.Linq;
using System.Collections.Generic;

public class Solution
{
    public int solution(int n)
    {
        int answer = 0;
        List<int> arrayInt = new List<int>();
        while (n > 0)
        {
            arrayInt.Add(n % 3);
            n = n / 3;
        }
        answer = arrayInt[0];
        for (int i = 1; i < arrayInt.Count; i++)
            answer = answer * 3 + arrayInt[i];
        return answer;
    }
}