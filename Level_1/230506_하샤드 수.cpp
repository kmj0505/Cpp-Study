// �ϻ��� ��

// ���� ���� : ���� ���� x�� �ϻ��� ���̷��� x�� �ڸ����� ������ x�� ���������� �մϴ�. 
//			   ���� ��� 18�� �ڸ��� ���� 1+8=9�̰�, 18�� 9�� ������ �������Ƿ� 18�� �ϻ��� ���Դϴ�. 
//			   �ڿ��� x�� �Է¹޾� x�� �ϻ��� ������ �ƴ��� �˻��ϴ� �Լ�, solution�� �ϼ����ּ���.

// ex) x = 10 return = true,
//	   x = 12 return = true,
//	   x = 11 return = false,
//	   x = 13 return = false


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    bool answer = true;
    int sum = 0;
    int x;
    cin >> x;
    int num = x;
    if ((1 <= x) && (x <= 10000))
    {
        while (num > 0)
        {
            sum += (num % 10);
            num /= 10;
        }
        if (x % sum == 0)
        {
            answer = true;
        }
        else
        {
            answer = false;
        }
    }
    else
    {
        answer = false;
    }
    cout << answer << endl;
}