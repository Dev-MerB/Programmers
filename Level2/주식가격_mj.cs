using System;
public class Solution{
    public int[] solution(int[] prices)    {
        int count = 0;
        int[] answer = new int[prices.Length];
        for (int i = 0; i < prices.Length - 1; i++){
            count = 0;
            for (int j = i + 1; j < prices.Length; j++){
                if (prices[i] <= prices[j])
                    count++;
                else{
                    count++;
                    break;
                }
            }
            answer[i] = count;
        }
        return answer;
    }
}