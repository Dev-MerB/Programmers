#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    long long temp = x;
    while (n-- > 0) {
        answer.push_back(temp);
        temp += x;
    }
    return answer;
}