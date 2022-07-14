using System;
using System.Linq;
using System.Collections.Generic;

public class Solution
{
    public int[] solution(int[] answers)
    {
        List<int> answerList = new List<int>();
        int[,] supo = { { 1, 2, 3, 4, 5, 0, 0, 0, 0, 0 }, { 2, 1, 2, 3, 2, 4, 2, 5, 0, 0 }, { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 } };
        int[] num = { 0, 0, 0 };
        for (int i = 0; i < answers.Length; i++)
        {
            if (supo[0, i % 5] == answers[i])
                num[0]++;
            if (supo[1, i % 8] == answers[i])
                num[1]++;
            if (supo[2, i % 10] == answers[i])
                num[2]++;
        }

        if (num[0] >= num[1] && num[0] >= num[2])
            answerList.Add(1);
        if (num[1] >= num[0] && num[1] >= num[2])
            answerList.Add(2);
        if (num[2] >= num[0] && num[2] >= num[1])
            answerList.Add(3);

        int[] answer = answerList.ToArray();
        return answer;
    }
}