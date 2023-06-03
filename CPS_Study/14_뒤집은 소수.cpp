//14. 뒤집은 소수

//문제 설명 : N개의 자연수가 입력되면 각 자연수를 뒤집은 후 그 뒤집은 수가 소수이면 그 수를 출력하는 프로그램을 작성하세요.
//			예를 들어 32를 뒤집으면 23이고, 23은 소수이다.그러면 23을 출력한다.
//			단 910를 뒤집으면 19로 숫자화 해야 한다.첫 자리부터의 연속된 0은 무시한다.
//			뒤집는 함수인 int reverse(int x) 와 소수인지를 확인하는 함수 bool isPrime(int x)를 반드시 작성하여 프로그래밍 한다.

//입력 : 5
//		32 55 62 3700 250

//출력 : 23 73


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
