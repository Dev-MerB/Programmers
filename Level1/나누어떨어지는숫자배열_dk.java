import java.util.*;

class Solution {
    public int[] solution(int[] arr, int divisor) {
        int[] answer = new int[arr.length];
        int count = 0;
        for(int i=0; i<arr.length; i++)
        {
            
            if(arr[i] % divisor == 0)
            {
               answer[count] = arr[i];
               count++;
            }

        }

          if(count == 0)
        {
            answer[0] = -1;
            count++;
        }
        answer = Arrays.copyOfRange(answer, 0 , count);
        Arrays.sort(answer);
      
        return answer;
    }
}

