// 가운데 글자 가져오기

// 문제 설명 : 단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요. 단어의 길이가 짝수라면 가운데 두글자를 반환하면 됩니다.

// ex) s = "abcde" return = "c",
//	   s = "qwer" return = "we"


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    string s;
    string answer = "";
    cin >> s;
    int size = s.size();
    if (size % 2 == 1)
    {
        answer = s[size / 2];
    }
    else
    {
        for (int i = size / 2 - 1; i <= size / 2; i++)
        {
            answer += s[i];
        }
    }
    cout << answer << endl;
}