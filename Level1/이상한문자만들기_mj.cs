public class Solution
{
    public string solution(string s)
    {
        string answer = "";
        bool flag = true;
        char cN = ' ';
        foreach (char c in s)
        {
            cN = c;
            if (c == 32)
                flag = false;
            if (!flag)
            {
                if (c < 95 && c > 64)
                    cN = (char)((int)c + 32);
                answer += cN;
                flag = true;
            }
            else
            {
                if (c > 95)
                    cN = (char)((int)c - 32);
                answer += cN;
                flag = false;
            }
        }
        return answer;
    }
}