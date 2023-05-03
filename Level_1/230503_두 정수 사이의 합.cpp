// 두 정수 사이의 합

// 문제 설명 : 두 정수 a, b가 주어졌을 때 a와 b 사이에 속한 모든 정수의 합을 리턴하는 함수, solution을 완성하세요.
//			   예를 들어 a = 3, b = 5인 경우, 3 + 4 + 5 = 12이므로 12를 리턴합니다.

//ex) a = 3 b = 5 return = 12,
//	  a = 3 b = 3 return = 3,
//	  a = 5 b = 3 return = 12


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    long long answer = 0;
    cin >> a;
    cin >> b;
    if (a <= b)
    {
        for (int i = a; i <= b; i++)
        {
            answer += i;
        }
    }
    else if (a > b)
    {
        for (int i = a; i >= b; i--)
        {
            answer += i;
        }
    }
    cout << answer << endl;
}