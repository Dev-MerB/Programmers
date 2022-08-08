using System;

public class Solution
{
    int answer = 0;
    int[] nQueen;
    public int solution(int n)
    {
        nQueen = new int[n];
        nqueen(0, n);
        return answer;
    }
    public void nqueen(int row, int n)
    {
        if (row == n)
        {
            answer++;
            return;
        }
        for (int i = 0; i < n; i++)
        {
            nQueen[row] = i;
            if (check(row))
                nqueen(row + 1, n);
        }
    }
    public bool check(int row)
    {
        for (int j = 0; j < row; j++)
            if (nQueen[row] == nQueen[j] || row - j == Math.Abs(nQueen[row] - nQueen[j]))
                return false;
        return true;
    }
}