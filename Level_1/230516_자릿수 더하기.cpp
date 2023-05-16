// 자릿수 더하기

// 문제 설명 : 자연수 N이 주어지면, N의 각 자릿수의 합을 구해서 return 하는 solution 함수를 만들어 주세요.
//			   예를들어 N = 123이면 1 + 2 + 3 = 6을 return 하면 됩니다.

// ex) N = 123 answer = 6
//	   N = 987 answer = 24


#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int answer = 0;
    string num = to_string(n);
    for (int i = 0; i < num.size(); i++)
    {
        int number = stoi(string(1, num[i]));
        answer += number;
    }
    cout << answer << endl;
}