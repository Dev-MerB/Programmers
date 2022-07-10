class Solution {
    public boolean solution(String s) {
        
        boolean answer = false; 
        
        if(s.length() == 4 || s.length() == 6)
        {
            String restr = s.replaceAll("[^0-9]","");
            if(restr.length() == 4 || restr.length() == 6)
            {
               answer = true;
            }
        }
 
   
        return answer;
    }
}