using System.Linq;
public class Solution
{
    public long[] solution(int x, int n)
    {
        long[] answer = new long[] { };
        for (int i = 1; i < n + 1; i++)
            answer = answer.Concat(new long[] { (long)x * i }).ToArray();
        return answer;
    }
}