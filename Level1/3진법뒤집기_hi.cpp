#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    while(n)
    {
        v.push_back(n%3);
        n/=3;
    }
    
    int loc = 1;
    for(int i =v.size()-1; i>=0; i--)
    {
        answer+= v[i]*loc;
        loc *=3;
    }
    return answer;
}