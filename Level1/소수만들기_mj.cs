using System;
class Solution{
    public int solution(int[] nums){
        int answer = 0;
        for (int i = 0; i < nums.Length - 2; i++){
            for (int j = i + 1; j < nums.Length - 1; j++){
                for (int k = j + 1; k < nums.Length; k++){
                    int num = nums[i] + nums[j] + nums[k];
                    bool sosu = true;
                    for (int l = 2; l < num; l++){
                        if (num % l == 0){
                            sosu = false;
                            break;
                        }}
                    if (sosu)
                        answer++;
                }}}
        return answer;
    }}