using System;

public class Solution
{
    public int solution(int[] numbers)
    {
        int answer = 45;
        foreach (int num in numbers)
            answer -= num;
        return answer;
    }
}