using System;
using System.Linq;
using System.Collections.Generic;
public class Solution
{
    public int[] solution(string[] id_list, string[] report, int k)
    {
        int[] answer = new int[] { };
        Dictionary<string, int> reportDic = new Dictionary<string, int>();
        Dictionary<string, int> resultDic = new Dictionary<string, int>();
        report = report.Distinct().ToArray();

        foreach (string id in id_list)
        {
            reportDic.Add(id, 0);
            resultDic.Add(id, 0);
        }
        foreach (string list in report)
        {
            string[] name = list.Split();
            reportDic[name[1]]++;
        }
        foreach (string list in report)
        {
            string[] name = list.Split();
            if (reportDic[name[1]] >= k)
                resultDic[name[0]]++;
        }

        answer = resultDic.Values.ToArray();
        return answer;
    }
}