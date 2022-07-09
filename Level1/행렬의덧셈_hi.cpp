#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer(arr1.size(), vector<int>(0, 0));
    for (int y = 0; y<arr1.size(); ++y)
        for (int x = 0; x < arr1[y].size();++x)
            answer[y].push_back(arr1[y][x] + arr2[y][x]);
    return answer;
}