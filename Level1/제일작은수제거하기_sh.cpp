#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr){
    if (arr.size() == 1){
        vector<int> answer;
        answer.push_back(-1);
        return answer;
    }

    vector<int> v = arr;
    sort(v.begin(), v.end());
    arr.erase(arr.begin() + (find(arr.begin(), arr.end(), v[0]) - arr.begin()));
    return arr;
}