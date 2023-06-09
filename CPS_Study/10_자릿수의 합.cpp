//10. 자릿수의 합

//문제 설명 : N개의 자연수가 입력되면 각 자연수의 자릿수의 합을 구하고, 그 합이 최대인 자연수를 출력하는 프로그램을 작성하세요.
//			각 자연수의 자릿수의 합을 구하는 함수를 int digit_sum(int x)를 꼭 작성해서 프로그래밍 하세요.

//입력 : 5
//	125 15232 79 1325 97

//출력 : 97 (자리수의 합이 최대인 자연수가 여러개인 경우, 그 중 값이 가장 큰 값을 출력)


#include <iostream>
#include <string>

using namespace std;

int digit_sum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main(void) {
    int cnt, num;
    int max_sum = 0;
    int max_num = 0;

    cin >> cnt;

    for (int i = 0; i < cnt; i++) {
        cin >> num;
        int sum = digit_sum(num);

        if (sum > max_sum) {
            max_sum = sum;
            max_num = num;
        }
        else if (sum == max_sum && num > max_num) {
            max_num = num;
        }
    }

    cout << max_num << endl;

    return 0;
}
