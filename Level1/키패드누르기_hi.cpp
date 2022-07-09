#include <string>
#include <vector>
#include <cmath>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int last_L=10;
    int last_R=12;
    int loc_R;
    int loc_L;
    for(int i = 0; i<numbers.size(); i++)
    {
        if(numbers[i] ==1 |numbers[i] ==4 |numbers[i] ==7)
        {
            answer += "L";
            last_L= numbers[i];
        }
        else if(numbers[i] ==3 |numbers[i] ==6 |numbers[i] ==9)
        {
            answer+= "R";
            last_R = numbers[i];
        }
        else
        {
            if(numbers[i] == 0)
                numbers[i]= 11;
            loc_R = abs(numbers[i]-last_R)/3 + abs(numbers[i]-last_R)%3;
            loc_L = abs(numbers[i]-last_L)/3 + abs(numbers[i]-last_L)%3;
            
            if(loc_R<loc_L)
            {
                answer +="R";
                last_R=numbers[i];
            }
            else if(loc_R>loc_L)
            {
                answer +="L";
                last_L=numbers[i];
            }
            else
            {
                if(hand=="left")
                {
                    answer +="L";
                    last_L= numbers[i];
                }
                else
                {
                    answer +="R";
                    last_R= numbers[i];
                }
            }
        }
    }
    return answer;
}