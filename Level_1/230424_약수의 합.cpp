// 약수의 합

// 문제 설명 : 정수 n을 입력받아 n의 약수를 모두 더한 값을 리턴하는 함수, solution을 완성해주세요.

//ex) n = 12, return = 28
// 	  n = 5,  return = 6

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main(int n) {
    int answer = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            answer = answer + i;
        }
    }
    return answer;
}