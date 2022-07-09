#include <string>
#include <vector>

using namespace std;

// 1단계 new_id의 모든 대문자를 대응되는 소문자로 치환합니다.
vector<char> s1(vector<char> id){
    vector<char> answer;
    for (char i : id) {
        if (65 <= i && i <= 90) answer.push_back(i+ 32);
        else answer.push_back(i);
        }
    return answer;
}

//2단계 new_id에서 알파벳 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.)를 제외한 모든 문자를 제거합니다.
vector<char> s2(vector<char> id){
    vector<char> answer;
    for (char i : id) {
        if ((97 <= i && i <= 122) || (48 <= i && i <= 57) 
            || i == '-' || i == '_' || i == '.')
            answer.push_back(i);
    }
    return answer;
}

//3단계 new_id에서 마침표(.)가 2번 이상 연속된 부분을 하나의 마침표(.)로 치환합니다.
vector<char> s3(vector<char> id){
    vector<char> answer;
    bool pre_dot = false;
    
    for (char i : id) {
        if (i == '.'){
            if (!pre_dot) pre_dot = true;
        }
        else{
            if (pre_dot){
                pre_dot = false;
                answer.push_back('.');
            }
            answer.push_back(i);
        }
    }
    
    if (pre_dot) answer.push_back('.');
    return answer;
}

// 4단계 new_id에서 마침표(.)가 처음이나 끝에 위치한다면 제거합니다.
vector<char> s4(vector<char> id){
    if (id[0] == '.') id.erase(id.begin());
    if (id[id.size()-1] == '.') id.pop_back();
    return id;
}

//5단계 new_id가 빈 문자열이라면, new_id에 "a"를 대입합니다.
vector<char> s5(vector<char> id){
    if (id.size() == 0) id.push_back('a');
    return id;
}

//6단계 new_id의 길이가 16자 이상이면, new_id의 첫 15개의 문자를 제외한 나머지 문자들을 모두 제거합니다.
//만약 제거 후 마침표(.)가 new_id의 끝에 위치한다면 끝에 위치한 마침표(.) 문자를 제거합니다.
vector<char> s6(vector<char> id){
    if (id.size() > 15){
        id.erase(id.begin() + 15, id.begin() + id.size());
        if (id[id.size() - 1] == '.') id.pop_back();
    }
    return id;
}

//7단계 new_id의 길이가 2자 이하라면, new_id의 마지막 문자를 new_id의 길이가 3이 될 때까지 반복해서 끝에 붙입니다.
vector<char> s7(vector<char> id){
    if (id.size() < 3){
        while(id.size() < 3){
            id.push_back(id[id.size() - 1]);
        }
    }
    return id;
}


string solution(string new_id) {
    vector<char> id_vec(new_id.begin(), new_id.end());
    id_vec = s7(s6(s5(s4(s3(s2(s1(id_vec)))))));
    string renew_id(id_vec.begin(), id_vec.end());
    return renew_id;
}