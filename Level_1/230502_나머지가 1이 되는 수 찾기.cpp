// �������� 1�� �Ǵ� �� ã��

// ���� ���� : �ڿ��� n�� �Ű������� �־����ϴ�.
//			   n�� x�� ���� �������� 1�� �ǵ��� �ϴ� ���� ���� �ڿ��� x�� return �ϵ��� solution �Լ��� �ϼ����ּ���.
//			   ���� �׻� �������� ����� �� �ֽ��ϴ�.


//ex) n	= 10 result = 3,
//	  n = 12 result = 11

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    int answer = 0;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 1)
        {
            answer = i;
            break;
        }
    }
    cout << answer << endl;
}