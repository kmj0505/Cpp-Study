// �� ���� ������ ��

// ���� ���� : �� ���� a, b�� �־����� �� a�� b ���̿� ���� ��� ������ ���� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
//			   ���� ��� a = 3, b = 5�� ���, 3 + 4 + 5 = 12�̹Ƿ� 12�� �����մϴ�.

//ex) a = 3 b = 5 return = 12,
//	  a = 3 b = 3 return = 3,
//	  a = 5 b = 3 return = 12


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    long long answer = 0;
    cin >> a;
    cin >> b;
    if (a <= b)
    {
        for (int i = a; i <= b; i++)
        {
            answer += i;
        }
    }
    else if (a > b)
    {
        for (int i = a; i >= b; i--)
        {
            answer += i;
        }
    }
    cout << answer << endl;
}