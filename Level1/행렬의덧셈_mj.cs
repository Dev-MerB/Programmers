public class Solution
{
    public string solution(int a, int b)
    {
        string answer = "";
        int num = 0;
        int[] month = { 0, 3, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6 };
        string[] day = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };

        num = (month[a - 1] + b - 1) % 7;
        answer = day[num];

        return answer;
    }
}