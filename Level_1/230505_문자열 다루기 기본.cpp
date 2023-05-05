// 문자열 다루기 기본

// 문제 설명 : 문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수, solution을 완성하세요. 
//			   예를 들어 s가 "a234"이면 False를 리턴하고 "1234"라면 True를 리턴하면 됩니다.

// ex) s = "s234" return = false,
//	   s = "1234" return = true


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    string s;
    bool answer = true;
    cin >> s;
    if ((s.size() == 4) || (s.size() == 6))
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]) == 0)
            {
                answer = false;
                break;
            }
            else
            {
                answer = true;
            }
        }
    }
    else
    {
        answer = false;
    }
    cout << answer << endl;
}