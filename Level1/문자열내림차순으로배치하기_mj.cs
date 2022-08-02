public class Solution
{
    public string solution(string s)
    {
        char[] a = s.ToCharArray();
        char temp = ' ';
        for (int j = 0; j < a.Length - 1; j++)
        {
            for (int i = 0; i < a.Length - 1; i++)
            {
                if (a[i] < a[i + 1])
                {
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                }
            }
        }
        string answer = new string(a);
        return answer;
    }
}