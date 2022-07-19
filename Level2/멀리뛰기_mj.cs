public class Solution
{
    public long solution(int n)
    {
        long answer = 0;
        int[] temp = new int[n];

        if (n == 1)
            answer = 1;
        else
        {
            temp[0] = 1;
            temp[1] = 2;

            for (int i = 2; i < n; i++)
                temp[i] = (temp[i - 1] % 1234567 + temp[i - 2] % 1234567) % 1234567;
            answer = temp[n - 1];
        }
        return answer;
    }
}