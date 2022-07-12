using System;

public class Solution
{
    public int solution(string s)
    {
        int answer = 0;
        string[] nums = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
        string[] words = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

        for (int i = 0; i < 10; i++)
            s = s.Replace(words[i], nums[i]);
        answer = Int32.Parse(s);
        return answer;
    }
}