#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string new_id) {
    string removable = "~!@#$%^&*()=+[{]}:?,<>/";
    // 1
    transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower);
    //2
    for(int i=0; i<removable.length(); i++)
        for(int j=0; j<new_id.length(); j++)
            if(removable[i] == new_id[j])
                new_id.erase(remove(new_id.begin(),new_id.end(),removable[i]),new_id.end());
    //3
    for(int i = 1; i<new_id.length();)
    {
        if(new_id[i] =='.' && new_id[i-1] =='.')
        {
            new_id.erase(new_id.begin()+i);
            continue;
        }
        else i++;
    }
    //4
    if (new_id.front() == '.') new_id.erase(new_id.begin());
    if (new_id.back() == '.') new_id.erase(new_id.end() - 1);
    //5
    if (new_id.length() == 0)
        new_id = "a";
    //6
     if (new_id.length() >= 16) 
        new_id.erase(15, new_id.length());
    if (new_id.back() == '.') 
        new_id.erase(new_id.end() - 1);
    //7
    if (new_id.length() <= 2) 
        while (new_id.length() != 3)
            new_id += new_id.back();
    
    return new_id;
}