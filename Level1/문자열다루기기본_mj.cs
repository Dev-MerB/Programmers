using System;
using System.Text;

public class Solution{
    public bool solution(string s){   
        bool answer = true;
        if ((s.Length != 4) && (s.Length != 6))
            answer = false;
        else{
            foreach (char c in s){
                if ((Char.GetNumericValue(c) + 48) != (System.Convert.ToInt32(c))){
                    answer = false;
                    return;}}}
        return answer;
    }}
