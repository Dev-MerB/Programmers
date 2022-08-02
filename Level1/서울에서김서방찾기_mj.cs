using System;
using System.Linq;
using System.Collections.Generic;
public class Solution
{
    public string solution(string[] seoul)
    {
        string answer = "";
        int idx = Array.IndexOf(seoul, "Kim");
        answer = "김서방은 " + idx + "에 있다";
        return answer;
    }
}