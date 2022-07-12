#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    int temp = 1;
    long long answer = 0;
    if (a > b) temp = -1;
    
    for(int i=a ; i!=b ; i+=temp){
        answer += i;    
    }
    return answer + b;
}