//15. �Ҽ��� ����

//���� ���� : �ڿ��� N�� �ԷµǸ� 1���� N������ �Ҽ��� ������ ����ϴ� ���α׷��� �ۼ��ϼ���. 
//			���� 20�� �ԷµǸ� 1���� 20������ �Ҽ��� 2, 3, 5, 7, 11, 13, 17, 19�� �� 8���Դϴ�.
//			���ѽð��� 1���Դϴ�.

//�Է� : 20

//��� : 8


#include <iostream>
#include <cmath>
using namespace std;

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

int countPrimes(int N) {
    int count = 0;
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;

    int numPrimes = countPrimes(N);
    cout << numPrimes << endl;

    return 0;
}
