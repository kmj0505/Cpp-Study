//15. �Ҽ��� ����

//���� ���� : �ڿ��� N�� �ԷµǸ� 1���� N������ �Ҽ��� ������ ����ϴ� ���α׷��� �ۼ��ϼ���. 
//			���� 20�� �ԷµǸ� 1���� 20������ �Ҽ��� 2, 3, 5, 7, 11, 13, 17, 19�� �� 8���Դϴ�.
//			���ѽð��� 1���Դϴ�.

//�Է� : 20

//��� : 8


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    int cnt = 0;

    cin >> N;

    for (int i = 2; i < N; i++)
    {
        if (isPrime(i) == true)
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
