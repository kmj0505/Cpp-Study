// ¦���� Ȧ��

// ���� ���� : ���� num�� ¦���� ��� "Even"�� ��ȯ�ϰ� Ȧ���� ��� "Odd"�� ��ȯ�ϴ� �Լ�, solution�� �ϼ����ּ���.

//ex) n = 3, return = "Odd"
// 	  n = 4, return = "Even"

#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    if (num % 2 == 0) {
        answer = "Even";
    }
    else {
        answer = "Odd";
    }
    return answer;
}