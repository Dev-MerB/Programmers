using System;
using System.Linq;

public class Solution
{
    int[,] temp;
    int[] answer = new int[] { 0, 0 };

    public int[] solution(int[,] arr)
    {
        temp = arr;
        int len = arr.GetLength(0);
        DFS(0, 0, len);

        return answer;
    }

    public void DFS(int x, int y, int len)
    {
        bool check_zero = true;
        bool check_one = true;
        for (int i = x; i < x + len; i++)
        {
            for (int j = y; j < y + len; j++)
            {
                if (temp[i, j] == 0)
                {
                    check_one = false;
                }
                if (temp[i, j] == 1)
                {
                    check_zero = false;
                }
            }
        }
        if (check_zero)
        {
            answer[0]++;
            return;
        }
        if (check_one)
        {
            answer[1]++;
            return;
        }
        DFS(x, y, len / 2);
        DFS(x, y + len / 2, len / 2);
        DFS(x + len / 2, y, len / 2);
        DFS(x + len / 2, y + len / 2, len / 2);
    }
}