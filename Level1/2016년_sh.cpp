#include <string>
#include <vector>
#include <set>
using namespace std;

/*
1월 1일부터 a월 b일까지의 day를 구하고, 이를 7로 나눠서 요일을 알아낸다.
*/
string solution(int a, int b) {

    vector<string> days = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };
    set<int> month_type1 = { 1, 3, 5, 7, 8, 10, 12 }; // 31일 까지
    set<int> month_type2 = { 4, 6, 9, 11 }; //30일 까지

    //모든 날짜를 합산할 변수
    int sumOfDays = b;

    while (--a > 0) {
        if (a == 2) sumOfDays += 29;
        else if (month_type1.find(a) != month_type1.end()) sumOfDays += 31;
        else if (month_type2.find(a) != month_type2.end()) sumOfDays += 30;
    }

    sumOfDays = (sumOfDays - 1) % 7;
    return days[sumOfDays];
}