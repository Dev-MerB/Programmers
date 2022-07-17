#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int p = 0;
    int y = 0;
    bool answer = true;
    
    for(char &c : s){
        if(c=='P' || c=='p') p++;
        if(c=='Y' || c=='y') y++;
    }
    if(p==y) return true;
    else return false;
}