#include <string>
#include <vector>
#include <set>
using namespace std;

/*
1�� 1�Ϻ��� a�� b�ϱ����� day�� ���ϰ�, �̸� 7�� ������ ������ �˾Ƴ���.
*/
string solution(int a, int b) {

    vector<string> days = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };
    set<int> month_type1 = { 1, 3, 5, 7, 8, 10, 12 }; // 31�� ����
    set<int> month_type2 = { 4, 6, 9, 11 }; //30�� ����

    //��� ��¥�� �ջ��� ����
    int sumOfDays = b;

    while (--a > 0) {
        if (a == 2) sumOfDays += 29;
        else if (month_type1.find(a) != month_type1.end()) sumOfDays += 31;
        else if (month_type2.find(a) != month_type2.end()) sumOfDays += 30;
    }

    sumOfDays = (sumOfDays - 1) % 7;
    return days[sumOfDays];
}