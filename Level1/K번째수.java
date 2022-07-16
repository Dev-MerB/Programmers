import java.util.*;
class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int[] answer = new int[commands.length];
        int[] array2 ={};
        for(int i=0; i<commands.length; i++)
        {
            
            
            if(commands[i][0] == commands[i][1])
            {
                answer[i] = array[commands[i][0]-1];
                
            }
            else
            {
                  array2 = Arrays.copyOfRange(array, commands[i][0]-1,commands[i][1]);
            
              
               Arrays.sort(array2);
     
               answer[i] = array2[commands[i][2]-1];
            }
          
        }
        
    
        return answer;
    }
}