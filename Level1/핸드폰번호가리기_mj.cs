public class Solution
{
    public string solution(string phone_number)
    {
        string answer = "";
        for (int i = 0; i < phone_number.Length - 4; i++)
            answer += "*";
        for (int i = phone_number.Length - 4; i < phone_number.Length; i++)
            answer += phone_number[i];
        return answer;
    }
}