class Solution {
    public String solution(int[] numbers, String hand) {
        String answer = "";
        String[] loc = {"1/0/0","2/0/1","3/0/2","4/1/0","5/1/1","6/1/2","7/2/0","8/2/1","9/2/2","10/3/0","0/3/1","12/3/2"};

        int left_pose = 10;
        int left_loc1 = 3;
        int left_loc2 = 0;
        int right_pose = 12;
        int right_loc1 = 3;
        int right_loc2 = 2;

        for(int i=0; i<numbers.length; i++)
        {
            for(int j=0; j<loc.length; j++)
            {
                String[] arr = loc[j].split("/");

                int num = Integer.parseInt(arr[0]);
                int loc1 = Integer.parseInt(arr[1]);
                int loc2 = Integer.parseInt(arr[2]);

                if(numbers[i] == num)
                {
                     System.out.println(loc1+"/"+loc2);

                    if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
                    {
                        answer = answer + "L";
                        left_loc1 = loc1;
                        left_loc2 = loc2;
                    }
                    else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
                    {
                          answer = answer + "R";
                          right_loc1 = loc1;
                          right_loc2 = loc2;
                    }
                    else 
                    {
                         if(Math.abs(left_loc1 - loc1) + Math.abs(left_loc2 - loc2) < Math.abs(right_loc1 - loc1) + Math.abs(right_loc2 - loc2))
                    {
                        answer = answer + "L";
                        left_loc1 = loc1;
                        left_loc2 = loc2;
                    }
                    else if(Math.abs(left_loc1 - loc1) + Math.abs(left_loc2 - loc2) > Math.abs(right_loc1 - loc1) + Math.abs(right_loc2 - loc2))
                    {
                        answer = answer + "R";
                        right_loc1 = loc1;
                        right_loc2 = loc2;
                    }

                    else
                    {
                        if(hand.equals("right"))
                        {
                            answer = answer + "R";
                          right_loc1 = loc1;
                          right_loc2 = loc2;
                        }
                        else
                        {
                             answer = answer + "L";
                           left_loc1 = loc1;
                           left_loc2 = loc2;
                        }
                    }
                    }

                }
            }

        }


        return answer;
  }
}