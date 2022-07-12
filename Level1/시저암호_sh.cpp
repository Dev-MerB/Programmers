#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (char &c : s){
        if(c==' ') answer += c;
        //65~90
        else if(c < 91) answer += 65 + (c - 65 + n) % 26;
        //96~122
        else answer += 97 + (c - 97 + n) % 26;
    }
    return answer;
}