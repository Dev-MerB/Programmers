#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;
    int doll;
    for(int move : moves)
    {
        for(int i = 0; i<board.size(); i++)
        {
            doll = board[i][move-1];
            if(doll != 0)
            {
                board[i][move-1] = 0;
                if(!s.empty() && s.top() == doll)
                {
                    s.pop();
                    answer+= 2;
                }
                else
                    s.push(doll);
                break;
            }
        }
    }
    return answer;
}