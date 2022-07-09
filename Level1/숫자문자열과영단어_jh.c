#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0, i = 0, j = 0;
    char answers[10000] = {};
    printf("%s\n",s);
    while (s[i])
    {
        if (s[i] == 'z')
        {
            answers[j] = '0';
            i = i + 3;
            j++;
        }
        else if (s[i] == 'o')
        {
            answers[j] = '1';
            i = i + 2;
            j++;
        }
        else if (s[i] == 't')
        {
            if (s[i + 1] == 'w')
            {
                answers[j] = '2';
                i = i + 2;
                j++;
            }
            else
            {
                answers[j] = '3';
                i = i + 4;
                j++;
            }
        }
        else if (s[i] == 'f')
        {
            if (s[i + 1] == 'o')
            {
                answers[j] = '4';
                i = i + 3;
                j++;
            }
            else
            {
                answers[j] = '5';
                i = i + 3;
                j++;
            }
        }
        else if (s[i] == 's')
        {
            if (s[i + 1] == 'i')
            {
                answers[j] = '6';
                i = i + 2;
                j++;
            }
            else
            {
                answers[j] = '7';
                i = i + 4;
                j++;
            }
        }
        else if (s[i] == 'e')
        {
            answers[j] = '8';
            i = i + 4;
            j++;
        }
        else if (s[i] == 'n')
        {
            answers[j] = '9';
            i = i + 3;
            j++;

        }
        else
        {
            answers[j] = s[i];
            j++;
        }
        i++;
    }
    printf("%s",answers);
    return atoi(answers);
}