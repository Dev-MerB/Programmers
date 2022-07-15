import java.util.*;
class Solution {



    public String solution(String[] participant, String[] completion) {
        String answer = "";
        String temp ="";

        Arrays.sort(participant);
        Arrays.sort(completion);


        for(int i=0; i<participant.length; i++)
        {

          if(i != participant.length-1)
          {
           if(!participant[i].equals(completion[i]))
           {
               answer = participant[i];
               return answer;
           }
          }
            else
            {
                answer = participant[i];
            }

        }
        return answer;
    }

}