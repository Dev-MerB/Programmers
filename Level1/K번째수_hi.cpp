#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(auto cmd : commands)
    {
        vector<int> temp;
        std::copy(array.begin()+cmd[0]-1,array.begin()+cmd[1],back_inserter(temp));
        sort(temp.begin(), temp.end());
        answer.push_back(temp[cmd[2]-1]);
    }
    return answer;
}