using System;

public class Solution
{
    public int solution(int[] priorities, int location)
    {
        int answer = 0;
        int i = 0;
        int num = 1;
        int[] answers = new int[priorities.Length];
        while (num <= priorities.Length)
        {
            int count = 0;
            for (int j = 1; j < priorities.Length; j++)
            {
                if (priorities[i % priorities.Length] >= priorities[(i + j) % priorities.Length])
                    count++;
                else
                    break;
            }
            if (count == (priorities.Length - 1))
            {
                priorities[i % priorities.Length] = 0;
                answers[i % priorities.Length] = num;
                num++;
                Console.WriteLine(num);
            }
            i++;
        }
        answer = answers[location];
        return answer;
    }
}