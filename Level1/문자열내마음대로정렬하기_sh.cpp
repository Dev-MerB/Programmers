#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    for(int i=0;i<strings.size();i++){
        int k = 0; 
        string temp = "";
        for(char &c : strings[i]){
            if(k == n){
                temp = c + temp;
            }
            else temp = temp + c;
            k++;
        }
        strings[i] = temp;
    }
    
    sort(strings.begin(), strings.end());
    
    for(int i=0;i<strings.size();i++){
        int k = 0;
        char temp_c;
        string temp = "";   
        
        if(strings[i].size() != 1){
            for(char &c : strings[i]){
                if(k==0) temp_c = c;
                else if(k == n){
                    temp = temp + c + temp_c;
                }
                else temp = temp + c;
                k++;
            }    
            strings[i] = temp;
        }
    }
    
    return strings;
}