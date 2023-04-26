// 짝수와 홀수

// 문제 설명 : 정수 num이 짝수일 경우 "Even"을 반환하고 홀수인 경우 "Odd"를 반환하는 함수, solution을 완성해주세요.

//ex) n = 3, return = "Odd"
// 	  n = 4, return = "Even"

#include <string>
using namespace std;

string solution(int num) {
    string answer = "";
    if (num % 2 == 0) {
        answer = "Even";
#include <vector>

    }
    else {
        answer = "Odd";
    }
    return answer;
}