#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    for (char & c : s){
        if (c == ' '){
            idx = 0;
            answer += c;
        }
        else{
            if(idx % 2) {
                if(c<97) answer += (c + 32);
                else answer += c;
            }
            else {
                if(c>90) answer += (c - 32);   
                else answer += c;
            }
            idx++;
        }
    }
    return answer; 
}