#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(string s) {
    
    map<string, string> numbers;
    numbers["zero"] ="0";
    numbers["one"] ="1";
    numbers["two"] ="2";
    numbers["three"] ="3";
    numbers["four"] ="4";
    numbers["five"] ="5";
    numbers["six"] ="6";
    numbers["seven"] ="7";
    numbers["eight"] ="8";
    numbers["nine"] ="9";
    
    string result = "";
    string temp = "";
    for(char c : s)
    {
        if(isdigit(c) == 0)
        {
            temp += c;
            if(numbers[temp] !="")
            {
                result+=numbers[temp];
                temp="";
            }
        }
        else
            result+=c;
    }

    int answer = stoi(result);
    return answer;
}