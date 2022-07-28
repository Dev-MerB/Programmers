using System;
using System.Linq;
using System.Collections.Generic;
public class Solution
{
    public int[] solution(int[] arr)
    {
        if (arr.Length == 1)
            return new int[] { -1 };
        int[] arrSub = arr.Distinct().ToArray();
        Array.Sort(arrSub);
        int numToRemove = arrSub[0];
        int[] answer = arr.Where(val => val != numToRemove).ToArray();
        return answer;
    }
}