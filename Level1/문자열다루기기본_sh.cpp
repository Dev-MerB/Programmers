#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    int len = s.length();

    if (len == 4 || len == 6) {
        for (char const& c : s) {
            if (48 > c || c > 57) {
                answer = false;
                return answer;
            }
        }
    }
    return answer;
}
