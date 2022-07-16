import java.util.*;
class Solution {
    public int solution(int n, int[] lost, int[] reserve) {
        int answer = 0;
        
        answer = n - lost.length;
        
        Arrays.sort(lost);
        Arrays.sort(reserve);
        for(int i=0; i<lost.length; i++)
        {
            for(int j=0; j<reserve.length; j++)
            {
                if(lost[i] == reserve[j])
                {
                    answer++;
                    reserve[j] = -100;
                    lost[i] = -200;
                    break;
                }
            }
        }
        
        for(int i=0; i<lost.length; i++)
        {
            
            for(int j=0; j< reserve.length; j++)
            {
                 if(lost[i]-1 == reserve[j])
                 {
                    answer++;
                    reserve[j] = -100;
                    break;
                   
                 }
                 else if(lost[i]+1 == reserve[j])
                 {
                    answer++;
                    reserve[j] = -100;
                    break;
                 }
                
                
            }
        }
        return answer;
    }
}