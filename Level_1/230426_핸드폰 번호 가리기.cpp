// �ڵ��� ��ȣ ������

// ���� ���� : ���α׷��ӽ� ������� �������� ��ȣ�� ���� �������� ���� �� ������ ��ȭ��ȣ�� �Ϻθ� �����ϴ�.
//			   ��ȭ��ȣ�� ���ڿ� phone_number�� �־����� ��, ��ȭ��ȣ�� �� 4�ڸ��� ������ ������ ���ڸ� ���� * ���� ���� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ����ּ���.

//ex) phone_number = "01033334444", return = "*******4444"
//	  phone_number = "027778888" , return = "*****8888"

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    string phone_number;
    string answer = "";

    cin >> phone_number;
    if (phone_number.size() > 4)
    {
        for (int i = 0; i < phone_number.size() - 4; i++)
        {
            phone_number[i] = '*';
            answer = phone_number;
        }
    }
    else if (phone_number.size() == 4)
    {
        answer = phone_number;
    }
    cout << answer << endl;
}
