#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<double> rates;
    double user = stages.size();
    for(int i = 1; i<=N; i++)
    {
        double clear = 0;
        for(auto stage: stages) if(stage == i) clear++;
        if(clear == 0) rates.push_back(0);
        else rates.push_back(clear/user);
        user -= clear;
    }
    
    for(int i=0;i<N; i++)
    {
        auto itr = max_element(rates.begin(),rates.end());
        answer.push_back(itr-rates.begin()+1);
        *itr = -1;
    }
    return answer;
}