//15. 소수의 개수

//문제 설명 : 자연수 N이 입력되면 1부터 N까지의 소수의 개수를 출력하는 프로그램을 작성하세요. 
//			만약 20이 입력되면 1부터 20까지의 소수는 2, 3, 5, 7, 11, 13, 17, 19로 총 8개입니다.
//			제한시간은 1초입니다.

//입력 : 20

//출력 : 8


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
