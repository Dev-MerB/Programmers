#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string answer = "";
    vector<string> number_word = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", 
                                  "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int idx=0;
    while (idx<s.length()){
        for (int i = 0; i < 20; i++){
             if(s.substr(idx, number_word[i].length()) == number_word[i]){
                 answer += number_word[i%10];
                 idx += number_word[i].length();
             }
        }
    }
    return stoi(answer);
}