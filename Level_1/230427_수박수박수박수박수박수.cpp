// ���ڼ��ڼ��ڼ��ڼ��ڼ��ڼ�?

// ���� ���� : ���̰� n�̰�, "���ڼ��ڼ��ڼ�...."�� ���� ������ �����ϴ� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
//			   ������� n�� 4�̸� "���ڼ���"�� �����ϰ� 3�̶�� "���ڼ�"�� �����ϸ� �˴ϴ�.

//ex) n = 3, return = "���ڼ�"
//    n = 4, return = "���ڼ���"

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
            answer += "��";
        }
        else if (i % 2 == 1)
        {
            answer += "��";
        }
    }
    cout << answer << endl;
}