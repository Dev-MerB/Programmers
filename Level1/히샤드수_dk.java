class Solution {
    public boolean solution(int x) {
        boolean answer = true;
        int sum =0;
        String str = Integer.toString(x);
        
        char[] number = str.toCharArray();
        for(int i=0; i<number.length; i++)
        {
            sum+= number[i]-'0';
        }
        
        if(x % sum == 0)
        {
            answer = true;
        }
        else
        {
            answer = false;
        }
        return answer;
    }
}