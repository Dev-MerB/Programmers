using System;
public class Solution{
    public int solution(int n){
        int answer = 0;
        answer = function(n);
        return answer;
    }
    public int function(int n){
        int[] array = new int[n + 1];
        array[0] = 0;
        array[1] = 1;
        for (int i = 2; i < n + 1; i++){
            array[i] = array[i - 1] % 1234567 + array[i - 2] % 1234567;
        }
        return array[n] % 1234567;
    }
}