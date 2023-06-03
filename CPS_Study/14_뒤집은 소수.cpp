//14. ������ �Ҽ�

//���� ���� : N���� �ڿ����� �ԷµǸ� �� �ڿ����� ������ �� �� ������ ���� �Ҽ��̸� �� ���� ����ϴ� ���α׷��� �ۼ��ϼ���.
//			���� ��� 32�� �������� 23�̰�, 23�� �Ҽ��̴�.�׷��� 23�� ����Ѵ�.
//			�� 910�� �������� 19�� ����ȭ �ؾ� �Ѵ�.ù �ڸ������� ���ӵ� 0�� �����Ѵ�.
//			������ �Լ��� int reverse(int x) �� �Ҽ������� Ȯ���ϴ� �Լ� bool isPrime(int x)�� �ݵ�� �ۼ��Ͽ� ���α׷��� �Ѵ�.

//�Է� : 5
//		32 55 62 3700 250

//��� : 23 73


#include <string>
#include <iostream>

using namespace std;

int reverse(int x) {
    int reversed = 0;
    while (x > 0) {
        reversed = reversed * 10 + (x % 10);
        x /= 10;
    }
    return reversed;
}

bool isPrime(int x) {
    if (x < 2) {
        return false;
    }
    int sqrtX = sqrt(x);
    for (int i = 2; i <= sqrtX; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        int reversedNum = reverse(num);
        if (isPrime(reversedNum)) {
            cout << reversedNum << " ";
        }
    }

    return 0;
}
