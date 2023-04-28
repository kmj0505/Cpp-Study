// 수박수박수박수박수박수박수?

// 문제 설명 : 길이가 n이고, "수박수박수박수...."와 같은 패턴을 유지하는 문자열을 리턴하는 함수, solution을 완성하세요.
//			   예를들어 n이 4이면 "수박수박"을 리턴하고 3이라면 "수박수"를 리턴하면 됩니다.

//ex) n = 3, return = "수박수"
//    n = 4, return = "수박수박"

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string answer = "";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            answer += "박";
        }
        else if (i % 2 == 1)
        {
            answer += "수";
        }
    }
    cout << answer << endl;
}