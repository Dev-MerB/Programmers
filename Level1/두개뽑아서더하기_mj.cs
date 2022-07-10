using System;
using System.Linq;

public class Solution
{
    public int[] solution(int[] numbers)
    {
        int[] answer = new int[numbers.Length * (numbers.Length - 1) / 2];
        int a = 0;
        for (int i = 0; i < numbers.Length; i++)
        {
            for (int j = i + 1; j < numbers.Length; j++)
            {
                answer[a++] = numbers[i] + numbers[j];
            }
        }
        answer = answer.Distinct().ToArray();
        Array.Sort(answer);
        return answer;
    }
}