// ����� ��

// ���� ���� : ���� n�� �Է¹޾� n�� ����� ��� ���� ���� �����ϴ� �Լ�, solution�� �ϼ����ּ���.

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