#include <string>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;

    int len_row = arr1.size();
    int len_col = arr1[0].size();

    for (int i = 0; i < len_row; i++) {
        vector<int> answer_row;
        for (int j = 0; j < len_col; j++)
            answer_row.push_back(arr1[i][j] + arr2[i][j]);
        answer.push_back(answer_row);
    }
    return answer;
}