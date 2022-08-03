using System;
public class Solution{
    public bool solution(string s){
        int count = 0;
        char[] cA = s.ToCharArray();
        if (cA[0] == 41 || cA[cA.Length - 1] == 40)
            return false;
        else{
            foreach (char c in cA){
                if (c == 40)
                    count++;
                else if (c == 41)
                    count--;
                if (count < 0)
                    return false;
            }
            if (count != 0)
                return false;
        }
        return true;
    }
}