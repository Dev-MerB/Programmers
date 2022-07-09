#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    int hits = 0;
    int zeros = 0;
    
    for(auto& num : win_nums)
    {
        auto hit = find(lottos.begin(),lottos.end(), num);
        if(hit != lottos.end())
            hits++;
    }
    
    for(auto& lotto: lottos)
        if(lotto==0)
            zeros++;
    
    int max_hit = (hits+zeros == 0)?1:hits+zeros;
    int min_hit = (hits<2)?1:hits;
    
    answer.push_back(7-max_hit);
    answer.push_back(7-min_hit);
    
    return answer;
}