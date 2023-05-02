// 나머지가 1이 되는 수 찾기

// 문제 설명 : 자연수 n이 매개변수로 주어집니다.
//			   n을 x로 나눈 나머지가 1이 되도록 하는 가장 작은 자연수 x를 return 하도록 solution 함수를 완성해주세요.
//			   답이 항상 존재함은 증명될 수 있습니다.


//ex) n	= 10 result = 3,
//	  n = 12 result = 11

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    int answer = 0;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 1)
        {
            answer = i;
            break;
        }
    }
    cout << answer << endl;
}