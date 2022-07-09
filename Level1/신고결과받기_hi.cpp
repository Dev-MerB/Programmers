#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    map<string, int> rep_cnt;
    map<string, set<string>> rep_list;
    
    for(string repo: report)
    {
        int blank = repo.find(' ');
        string from = repo.substr(0,blank);
        string to = repo.substr(blank);
        
        if(rep_list[from].find(to) == rep_list[from].end())
        {
            rep_cnt[to]++;
            rep_list[from].insert(to);
        }
    }
    
    for(string id: id_list)
    {
        int i =0;
        for(string s:rep_list[id])
            if(rep_cnt[s] >=k ) i++;
        answer.push_back(i);
    }

    return answer;
}