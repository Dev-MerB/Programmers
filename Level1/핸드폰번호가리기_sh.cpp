#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int len = phone_number.length();
    answer += phone_number.substr(len-4, len);
    while(len-- > 4) answer = "*" + answer;        
    return answer;
}