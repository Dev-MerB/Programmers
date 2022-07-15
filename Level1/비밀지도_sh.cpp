#include <string>
#include <vector>

using namespace std;

string toBinary(int n, int n1, int n2) {
    string r;
    while (n--){
        r = ((n1 % 2 == 0 ? " " : "#") == ( n2% 2 == 0 ? " " : "#" ) ? (n1 % 2 == 0 ? " " : "#") : "#") + r;
        n1 /= 2;
        n2 /= 2;
    }
    return r;
}


vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {  
    vector<string> answer(n);
    
    for (int i=0;i<n;i++){
        answer[i] = toBinary(n, arr1[i], arr2[i]);        
    }
    
    return answer;
}