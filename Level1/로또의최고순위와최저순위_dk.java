class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
        int[] answer = {0,0};
        int count =0;
        int zero_num =0;
        for(int i=0; i<lottos.length; i++)
        {
            if(lottos[i] != 0)
            {
                for(int j=0; j<win_nums.length; j++)
                {
                    if(lottos[i] == win_nums[j])
                    {
                        count++;
                    }
                }
            }
            else
            {
                zero_num++;
            }
        }

        answer[1] = 6-count +1;
        if(answer[1]>6)
        {
            answer[1] = 6;
        }

        if(answer[1]<1)
        {
            answer[1] = 1;
        }
        answer[0] = (6-(count+zero_num))+1;
         if(answer[0]>6)
        {
            answer[0] = 6;
        }

        if(answer[0]<1)
        {
            answer[0] = 1;
        }
        return answer;
    }
}