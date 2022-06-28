#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
    string answer = "";
    int flag = true;

    while (n > 0) {
        if (flag) { answer += "수"; }
        else { answer += "박"; }
        flag = !flag;
        n--;
    }

    return answer;
}

int main() {
    int n = 3;
    solution(n);

    return 0;
}