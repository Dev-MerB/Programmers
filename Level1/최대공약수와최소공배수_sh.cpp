#include <string>
#include <vector>

using namespace std;

int gcd(int n1, int n2){
    if (n2 == 0) return n1;
    else return gcd(n2, n1 % n2);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n, m));
    answer.push_back((n * m) / answer[0]);
    return answer;
}