using System;
public class Solution{
    public int solution(int[] numbers, int target){
        int answer = 0;
        int length = numbers.Length - 1;

        answer += dfs(numbers[0], numbers, target, length);
        answer += dfs(-numbers[0], numbers, target, length);

        return answer;
    }
    public int dfs(int sum, int[] numbers, int target, int length){
        int answer = 0;
        if (length > 0){
            answer += dfs(plus, numbers, target, length - 1);
            answer += dfs(minus, numbers, target, length - 1);
        }
        else
            if (sum == target)
                return 1;
        return answer;
    }
}