#include <vector>
#include <numeric>
using namespace std;

int solution(vector<int> numbers) {
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    return 45 - sum;
}