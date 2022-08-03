public class Solution
{
    public string solution(string s, int n)
    {
        string answer = "";
        char cN = ' ';
        foreach (char c in s)
        {
            cN = c;
            if (cN < 91 && cN > 64)
            {
                cN = (char)(cN + n);
                if (cN > 90)
                    cN = (char)(cN - 26);
            }
            else if (cN > 96 && cN < 123)
            {
                cN = (char)(cN + n);
                if (cN > 122)
                    cN = (char)(cN - 26);
            }
            answer += cN;
        }
        return answer;
    }
}