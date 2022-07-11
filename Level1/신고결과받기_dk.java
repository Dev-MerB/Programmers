import java.util.*;

class Solution {
    public int[] solution(String[] id_list, String[] report, int k) {
        int[] answer = new int[id_list.length];
        int[] count = new int[id_list.length];
        String[] target = new String[id_list.length];
       for(int i=0; i<id_list.length; i++)
        {
            answer[i] =0;
        }
        LinkedHashSet<String> linkedHashSet = new LinkedHashSet<>(Arrays.asList(report));

        String[] resultArr = linkedHashSet.toArray(new String[0]);




        for(int i=0; i<resultArr.length; i++)
        {
            String[] array = resultArr[i].split(" ");
             int getIndex = Arrays.asList(id_list).indexOf(array[1]);
            count[getIndex]++;
        }

        for(int i=0; i<resultArr.length; i++)
        {
            String[] array = resultArr[i].split(" ");
            int getIndex = Arrays.asList(id_list).indexOf(array[1]);
            if(count[getIndex]>=k)
            {
                int getTargetIndex = Arrays.asList(id_list).indexOf(array[0]);
                answer[getTargetIndex]++;
            }
        }




        return answer;


    }
}
