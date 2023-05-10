// 시저 암호

// 문제 설명 : 어떤 문장의 각 알파벳을 일정한 거리만큼 밀어서 다른 알파벳으로 바꾸는 암호화 방식을 시저 암호라고 합니다.
//			   예를 들어 "AB"는 1만큼 밀면 "BC"가 되고, 3만큼 밀면 "DE"가 됩니다."z"는 1만큼 밀면 "a"가 됩니다. 
//			   문자열 s와 거리 n을 입력받아 s를 n만큼 민 암호문을 만드는 함수, solution을 완성해 보세요.

// ex) s = "AB"	n = 1 result = "BC"
//	   s = "z"	n = 1 result = "a"
//	   s = "a B z"	n = 4 result = "e F d"


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    string answer = "";
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == 90) || (s[i] == 122))
        {
            s[i] = s[i] - 26;
        }
        else if (s[i] == 32)
        {
            answer += s[i];
            continue;
        }

        int a = s[i] + n;
        if (((90 < a) && (a < 97)) || (122 < a))
        {
            a = a - 26;
        }
        if ((65 <= s[i]) && (s[i]) <= 90)
        {
            if (a > 90)
            {
                a = a - 26;
            }
        }
        answer += a;
    }
    cout << answer;
}